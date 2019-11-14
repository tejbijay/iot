const int LED = 7;
boolean x = true;

void setup() {
  Serial.begin(9600);
  pinMode(LED , OUTPUT);

}

void loop() {
  int c = analogRead(A0);
  delay(500);
if ( c<1 && x == true){
  digitalWrite(7,HIGH);
   x = false;
   delay(1000);

}
else if ( c <300 && x == false){
x = true;
digitalWrite(7,LOW);
delay(1000);
}
}
