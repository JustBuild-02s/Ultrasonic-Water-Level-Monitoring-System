#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

#define trigPin 9
#define echoPin 10
#define buzzer 8

const int tankHeight = 6;
const int halfLevel = 3;
const int fullThreshold = 1;

long duration;
int distance;
int waterLevel;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);

  lcd.init();
  lcd.backlight();
}

int getDistance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  int dist = duration * 0.034 / 2;

  return dist;
}

void loop() {

  distance = getDistance();

  if(distance > tankHeight)
  distance = tankHeight;

  waterLevel = tankHeight - distance;

  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Dist:");
  lcd.print(distance);
  lcd.print("cm");

  lcd.setCursor(0,1);
  lcd.print("Level:");
  lcd.print(waterLevel);
  lcd.print("/");
  lcd.print(tankHeight);

  if(waterLevel == halfLevel){

    for(int i=0;i<3;i++){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      delay(200);
    }

  }

  else if(distance <= fullThreshold){

    digitalWrite(buzzer,HIGH);

  }

  else{

    digitalWrite(buzzer,LOW);

  }

  delay(500);
}
