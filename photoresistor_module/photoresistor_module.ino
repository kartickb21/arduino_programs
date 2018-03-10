//Photoresistive light detection module

#define analogPin A0
#define digitalPin 2


void setup() {
  Serial.begin(9600);
  pinMode(digitalPin, INPUT);
}

void loop() {
  int aValue = analogRead(analogPin); // The analog pin gives output of the resistance provided by the ldr 1023(no light), 0(highest light)
  int dValue = digitalRead(digitalPin); // gives value '0' when reaches a preset level set by adjusting sensitivity otherwise '1' 
  Serial.print(aValue);
  Serial.print(",");
  Serial.println(dValue);
  delay(500);
}
