#include <LiquidCrystal.h>

// Initialize LCD with RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// IR sensor pins
const int slot1 = 7;  // IR Sensor 1
const int slot2 = 6;  // IR Sensor 2

void setup() {
  // Set up the LCD
  lcd.begin(16, 2);  // 16 columns, 2 rows
  
  // Configure IR sensor pins as input
  pinMode(slot1, INPUT);
  pinMode(slot2, INPUT);
  
  // Optional: startup display
  lcd.setCursor(0, 0);
  lcd.print("Smart Parking");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
}

void loop() {
  int s1 = digitalRead(slot1); // HIGH if empty, LOW if blocked
  int s2 = digitalRead(slot2);

  // Slot 1
  lcd.setCursor(0, 0);
  lcd.print("Slot1: ");
  if (s1 == LOW)
    lcd.print("Occupied ");
  else
    lcd.print("Free     ");

  // Slot 2
  lcd.setCursor(0, 1);
  lcd.print("Slot2: ");
  if (s2 == LOW)
    lcd.print("Occupied ");
  else
    lcd.print("Free     ");

  delay(1000);  // Update every second
}
