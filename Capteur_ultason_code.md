# int trigPin=8;
int echoPin=9;
float vitesse=331.5+0.6*20;//m/s
void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);

}

  float distanceM()
  {
    digitalWrite(trigPin,LOW);
    delayMicroseconds(3);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(5);
    digitalWrite(trigPin,LOW);
    float tUs=pulseIn(echoPin,HIGH);
    float t=tUs;
    float d=t*vitesse;
    return d;
  }

void loop() {
  float d=distanceM();
  Serial.println(d,DEC);
  delay(200);

}

