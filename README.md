# 🅿️ Smart Parking System using IR Sensors and LCD (Arduino Project)

This project simulates a **Smart Parking System** using IR sensors and a 16x2 LCD display. It detects whether parking slots are occupied or free and displays the status in real-time.

---

## 📌 Features

- Detects vehicle presence using IR sensors
- Displays real-time status on LCD:
  - ✅ **Free**
  - 🚫 **Occupied**
- Simple and cost-effective hardware setup
- Refreshes every second

---

## 🧰 Components Used

- Arduino UNO
- 2 × IR Sensors
- 1 × 16x2 LCD Display
- 1 × 10k Potentiometer (for LCD contrast control)
- Jumper Wires
- Breadboard (optional)
- ThinkerCAD or physical hardware

---

## 🧾 Arduino Code

```cpp
#include <LiquidCrystal.h>

// Initialize LCD with RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// IR sensor pins
const int slot1 = 7;  // IR Sensor 1
const int slot2 = 6;  // IR Sensor 2

void setup() {
  lcd.begin(16, 2);  // 16 columns, 2 rows
  pinMode(slot1, INPUT);
  pinMode(slot2, INPUT);

  lcd.setCursor(0, 0);
  lcd.print("Smart Parking");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  int s1 = digitalRead(slot1); // HIGH = Free, LOW = Occupied
  int s2 = digitalRead(slot2);

  lcd.setCursor(0, 0);
  lcd.print("Slot1: ");
  lcd.print((s1 == LOW) ? "Occupied " : "Free     ");

  lcd.setCursor(0, 1);
  lcd.print("Slot2: ");
  lcd.print((s2 == LOW) ? "Occupied " : "Free     ");

  delay(1000);
}

📂 Folder Structure
smart-parking-system/
├── code.ino               # Arduino source code
├── screenshot.png         # Circuit image (optional)
└── README.md              # This documentation


👨‍💻 Author
Chaitanya Kandula
🔗 GitHub: https://github.com/chaitanya-kandula
🔗 LinkedIn: https://www.linkedin.com/in/chaitanya-kandula1201
📧 Email: chaitanyakandula2005@gmail.com

🧠 Built With
Arduino IDE
ThinkerCAD Circuits
GitHub

📜 License

---

Let me know if you want:
- The `.gitignore` file for Arduino
- Combined README for multiple Arduino projects
- Help uploading this directly to your GitHub repo


