#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {
  lcd.begin(16, 2);
}


void loop() {
  for (int i=0 ; i < 5 ; i++);
  {
  lcd.setCursor(0,0);
  lcd.print("   Welcome to ");
  lcd.setCursor(0, 1);
  lcd.print("   Stockwood    ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("   Stockwood    ");
  lcd.setCursor(0, 1);
  lcd.print(" Vale Gun Club");
  delay(2000);
  }
}

