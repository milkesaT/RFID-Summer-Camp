# RFID-Summer-Camp
RFID-based Arduino attendance system for summer camp
RFID-Based Summer Camp Registration System
This project is an automated attendance management system designed for a summer camp using Arduino and RFID technology.
Each camper is assigned a unique RFID card or tag, which acts as their digital identity. When a camper scans their card on the RFID reader, the system captures the card’s Unique ID (UID).
The Arduino then compares this UID with a list of pre-stored authorized IDs in its memory. If the scanned UID matches a registered camper, the system confirms the identity and records the attendance successfully. If the UID is not recognized, the system rejects the entry and displays an “Unknown Card” or “Access Denied” message.
How It Works:
Camper taps RFID card on reader
RFID module reads the UID
Arduino processes the UID
System checks if UID is valid
Attendance is marked or rejected
🎯 Purpose of the Project:
This system replaces manual attendance tracking with a faster, more accurate, and automated solution. It reduces errors, saves time, and ensures reliable record keeping for camp organizers.
