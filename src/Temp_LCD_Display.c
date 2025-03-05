//Pin declaration for the LCD library(Provided by mikroc pro PIC programming IDE)
sbit LCD_RS at RB4_bit;//data and or commad pins declartion
sbit LCD_EN at RB5_bit;
sbit LCD_D7 at RB3_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D4 at RB0_bit;

sbit LCD_RS_Direction at TRISB4_bit;//directional pin(TRIS pin) declartion for data and commad pins
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D7_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB0_bit;

void main() {
       // Variables
    unsigned int adcValue = 0;
    float temperature = 0.0;
    
    // ADC configuration
    ADCON1 = 0x0E; // Configure AN0 as analog, the rest as digital
    ADC_Init();    // Initialize ADC

    // Initializing and clearing the LCD screen
       Lcd_Init();
       Lcd_Cmd(_LCD_CLEAR);
       Lcd_Cmd(_LCD_CURSOR_OFF);
       

       while (1) {
        // Read the ADC value from the LM35 channel
        adcValue = ADC_Read(0);

        // Convert the ADC value to voltage (assuming 10-bit ADC and 5V reference voltage)
        // Voltage = (ADC Value / 1023) * 5.0
        // Temperature (C) = Voltage * 100
        temperature = (adcValue / 1023.0) * 5.0 * 100;
        if(temperature < 15 ) {
          Lcd_Cmd(_LCD_CLEAR);
          Lcd_Out(1, 1, "Cold!");
        }
        if(temperature > 15 && temperature < 27 ) {
          Lcd_Cmd(_LCD_CLEAR);
          Lcd_Out(1, 1, "Normal");
        }
        if(temperature > 27 && temperature < 30 ) {
          Lcd_Cmd(_LCD_CLEAR);
          Lcd_Out(1, 1, "Hot");
        }
        if(temperature > 30 ) {
          Lcd_Cmd(_LCD_CLEAR);
          Lcd_Out(1, 1, "Fire!");
        }
        // Display or use the temperature value as needed
        // (e.g., send to an LCD, UART, etc.)

        Delay_ms(1000); // Delay for 1 second
    }
       
}