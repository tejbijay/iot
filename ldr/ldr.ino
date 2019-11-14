const int ledPin = 13; 
const int ldrPin = A2;

 void setup(){
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
 }

  void loop(){
   int ldrStatus = analogRead(ldrPin);

   if(ldrStatus<50)
   {
    digitalWrite(ledPin,HIGH);
    }
    else{
       digitalWrite(ledPin,LOW);
      }

    Serial.println(ldrStatus);

    delay(200);

    }
 
