# 📟 Temperature Monitoring System with LCD Display 🌡️  

## 📜 Overview  
This project is a **temperature monitoring system** that uses an **LM35 temperature sensor** with a **PIC18F2620 microcontroller** to display the temperature readings on an **LM016L LCD module**. The system categorizes the temperature into four levels:  

- **Below 15°C** → ❄️ "Cold"  
- **15°C - 27°C** → ✅ "Normal"  
- **27°C - 30°C** → 🔥 "Hot"  
- **Above 30°C** → 🚨 "Very Hot"  

The microcontroller operates at **5V**, and the system includes **resistors** for stability.  

---

## 📂 Project Structure  
- 📁 documents/ - Contains datasheets for the microcontroller, temperature sensor, and LCD
- 📁 src/ - Includes source code (.c)
- 📁 simulation/ - Contains Proteus simulation file (.pdsprj)
- 📁 circuit_diagram/ - Includes the circuit schematic image (.png)
- 📁 hex/ - Contains the compiled .hex file for flashing
- 📁 .gitignore - Excludes unnecessary files
- 📁 README.md - Project documentation

---

## 🛠 Components Used  
- **Microcontroller**: PIC18F2620  
- **Temperature Sensor**: LM35  
- **Display Module**: LM016L LCD  
- **Power Supply**: 5V source  
- **Passive Components**: Resistors for circuit stability  

---

## 🔌 Circuit Diagram  
The **Proteus simulation** and **circuit schematic** can be found in:  
✔ [`circuit_diagram`](circuit_diagram/) → PNG file of the circuit design.  
✔ [`simulation`](simulation/) → Proteus simulation project.  

---

## 💻 Code Implementation  
The **C source code** is stored in the [`src`](src/) folder. The compiled **HEX file** is available in the [`hex`](hex/) folder for flashing onto the PIC18F2620 microcontroller.  

---
## **Authors**
This project was developed by Abdulbasit Hamid 

## 🔓 Open-Source Notice  
This project is **open-source**, and you are free to use, modify, and share it. However, please provide **proper credit** if you use this work.  

*No formal license is applied to this project.*  
