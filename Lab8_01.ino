void setup() {
  pinMode(A0,INPUT);  // x axis
  pinMode(A1,INPUT);  // y axis
  Serial.begin(9600);
  pinMode(3,OUTPUT);  // motor
}

int x,y,motorSpeed;

void loop() {
  
  x = analogRead(A0);
  y = analogRead(A1);
  Serial.print("x = ");Serial.println(x);
  Serial.print("y = ");Serial.println(y);
  if (500 < y < 506 && 519 < x < 525)
  {
    analogWrite(3,0);
    Serial.println("speed = 0");
  }
  if (500 < y < 506 && x > 525)
  {
    motorSpeed = map(x,0,1025,0,255);
    analogWrite(3,x);
    Serial.print("speed = ");Serial.println(motorSpeed);
  }
}
