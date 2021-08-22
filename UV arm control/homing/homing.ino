int ARM1V=6;
int ARM1H=7;
int ARM2V=8;
int ARM2H=9;
int UPPER_MOTOR_DIR=10;
int LOWER_MOTOR_DIR=12;
int UPPER_MOTOR_STEP=11;
int LOWER_MOTOR_STEP=13;
void setup() {
  // put your setup code here, to run once:
pinMode(ARM1H, INPUT);
pinMode(ARM2V, INPUT);
pinMode(ARM2H, INPUT);
pinMode(ARM1V, INPUT);
pinMode(UPPER_MOTOR_DIR, OUTPUT);
pinMode(UPPER_MOTOR_STEP, OUTPUT);
pinMode( LOWER_MOTOR_DIR, OUTPUT);
pinMode(LOWER_MOTOR_STEP, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ARM1V,HIGH);
  digitalWrite(ARM2V,HIGH);
  digitalWrite(UPPER_MOTOR_DIR,HIGH);
  digitalWrite( LOWER_MOTOR_DIR,HIGH);
  Serial.println(digitalRead(ARM1V));
while(digitalRead(ARM1V)==HIGH){
  digitalWrite(UPPER_MOTOR_STEP,HIGH);
  delayMicroseconds(3300);
  digitalWrite(UPPER_MOTOR_STEP,LOW);
  delayMicroseconds(3300);
}
  digitalWrite(UPPER_MOTOR_STEP,LOW);
  
while(digitalRead(ARM2V)==HIGH){
  digitalWrite(LOWER_MOTOR_STEP,HIGH);
  delayMicroseconds(3300);
  digitalWrite(LOWER_MOTOR_STEP,LOW);
  delayMicroseconds(3300);
}
  digitalWrite(LOWER_MOTOR_STEP,LOW);
}
  



  




