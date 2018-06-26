#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

unsigned long duracion;

void setup() {
Serial.begin(9600);
lcd.begin(16,2);
pinMode(0, INPUT);    
}

void loop() {

duracion = pulseIn(0, HIGH);  
Serial.print(duracion);
  lcd.setCursor(0,0);
  lcd.print("@_MiguelRomeroG");
  lcd.setCursor(0,1);
  lcd.print("Duracion: ");
  lcd.setCursor(10,1);
  lcd.print(duracion);
  delay(200);
  lcd.clear();
  
}
