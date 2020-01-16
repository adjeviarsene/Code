int trig = 8; 
int echo = 9;
int led=13; 
long lecture_echo; 
long cm;
void setup() 
{ 
  pinMode(trig, OUTPUT); 
  digitalWrite(trig, LOW);
  digitalWrite(led,OUTPUT); 
  pinMode(echo, INPUT); 
  Serial.begin(9600); 
}
void loop() 
{ 
  digitalWrite(trig, HIGH); 
  delayMicroseconds(3); 
  digitalWrite(trig, LOW); 
  lecture_echo = pulseIn(echo, HIGH); 
  cm = lecture_echo / 20; 
  
  if(cm<10)
  {
    digitalWrite(led,HIGH); 
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(1000);
  Serial.print("Distance in cm : "); 
  Serial.println(cm);
   
}
