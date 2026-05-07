# RFID-Based Summer Camp Registration System

## 📌 Project Overview
This project is an automated attendance management system designed for a summer camp using **Arduino and RFID technology**.

Each camper is assigned a unique **RFID card or tag**, which acts as their digital identity. When a camper scans their card on the RFID reader, the system captures the card’s **Unique ID (UID)**.

The Arduino then compares this UID with a list of pre-stored authorized IDs in its memory. If the scanned UID matches a registered camper, the system confirms the identity and records the attendance successfully. If the UID is not recognized, the system rejects the entry and displays an **“Unknown Card”** or **“Access Denied”** message.

---

## ⚙️ How It Works
- Camper taps RFID card on the reader  
- RFID module reads the UID  
- Arduino processes the UID  
- System checks if UID is valid  
- Attendance is marked or rejected  

---

## 🎯 Purpose of the Project
This system replaces manual attendance tracking with a faster, more accurate, and automated solution. It reduces human errors, saves time, and ensures reliable record keeping for camp organizers.

---

## 💻 Technologies Used
- Arduino Uno  
- RFID RC522 Module  
- Embedded C++  
- RFID Technology  

---

## 📁 Output
- ✔ Registered card → Attendance marked successfully  
- ❌ Unknown card → Access Denied message  

---

## 👨‍💻 Author
##Milkesa Tesema
