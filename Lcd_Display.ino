#include <LiquidCrystal.h>

// Initialize the library with the pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  // Print message to the LCD
  lcd.print("Radhe Radhe");
}

void loop() {
  
}
