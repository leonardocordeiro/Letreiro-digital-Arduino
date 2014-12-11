#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
}

void loop() {
  char message[] = "Leonardo Cordeiro";
  int i = 0, count = 0, length = strlen(message);
  
  for(count = 0; count < length; count++) {
    lcd.print(message);
    for(i = 0; i < length - 1; i++) { 
      message[i] = message[i + 1];
      if(i == length - 2) { 
        message[i + 1] = '\0';
      }
    }
    delay(100);
    lcd.clear();
  }
}
