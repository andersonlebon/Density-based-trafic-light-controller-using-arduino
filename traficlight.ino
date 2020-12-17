    int trigpin= 1;    // declaring the triger pin where is plug
    int echopin=2;      // declaring the echopin pin where is plug
    float trigertime;
    float speedofsound=776.5;
    float distance;
void setup() {
  // put your setup code here, to run once:
    pinMode(trigpin, OUTPUT);
    pinMode(echopin, INPUT);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(trigpin, HIGH);
    delayMicroseconds(2000);
    digitalWrite(trigpin, LOW);
    delayMicroseconds(10);
     trigertime= pulseIn(echopin, HIGH);
      trigertime= trigertime/1000000;
        trigertime= trigertime/3600;
          distance= trigertime * speedofsound;
             distance= distance/2;
              distance= distance * 63360;
      Serial.println(distance);
//      delay(1000);
  
//  if(distance<20){
//      lcd.setCursor(5,1);
//      lcd.print("empty");
//      digitalWrite(ledorrelay, HIGH);
//      digitalWrite(buzzer, HIGH);
//  }
//   
//  else if(distance>20 && distance<50){
//        lcd.setCursor(5,1);
//        lcd.print("low level");
//        digitalWrite(ledorrelay, HIGH);\
//          digitalWrite(buzzer, HIGH);
//        
//  
//}
//  else{
//      lcd.setCursor(5,1);
//      lcd.print("full tank");
//      digitalWrite(ledorrelay, LOW);
//      digitalWrite(buzzer, LOW);
//  }

}
