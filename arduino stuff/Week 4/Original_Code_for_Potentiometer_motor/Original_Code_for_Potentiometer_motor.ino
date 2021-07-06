void setup() {
  pinMode(3, OUTPUT);
  pinMode(A0, OUTPUT);  //This will be GND for the potentiometer
  pinMode(A4, OUTPUT);  //This will be 3.3V for the pot.

  digitalWrite(A0, LOW);
  digitalWrite(A4, HIGH);

}


void loop() {
  int potent=analogRead(A2);
  Serial.println(potent);
  int motor_speed = (potent*255/1023);
  analogWrite(3, motor_speed);
}
