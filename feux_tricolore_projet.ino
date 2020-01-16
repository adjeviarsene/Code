int led_rouge_1=8;
int led_jaune_1=13;
int led_vert_1=12;
int led_rouge_2=11;
int led_jaune_2=10;
int led_vert_2=9;

void setup() {
  pinMode(led_rouge_1,OUTPUT);
  pinMode(led_jaune_1,OUTPUT);
  pinMode(led_vert_1,OUTPUT);
  pinMode(led_rouge_2,OUTPUT);
  pinMode(led_jaune_2,OUTPUT);
  pinMode(led_vert_2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(led_rouge_1,HIGH);
  digitalWrite(led_jaune_1,LOW);
  digitalWrite(led_vert_1,LOW);
  digitalWrite(led_rouge_2,LOW);
  digitalWrite(led_jaune_2,LOW);
  digitalWrite(led_vert_2,HIGH);
  delay(10000);
  digitalWrite(led_rouge_1,LOW);
  digitalWrite(led_jaune_1,HIGH);
  digitalWrite(led_jaune_2,HIGH);
  digitalWrite(led_vert_1,LOW);
  digitalWrite(led_vert_2,LOW);
  delay(10000);
  digitalWrite(led_rouge_1,LOW);
  digitalWrite(led_jaune_1,LOW);
  digitalWrite(led_vert_1,HIGH);
  digitalWrite(led_rouge_2,HIGH);
  digitalWrite(led_jaune_2,LOW);
  digitalWrite(led_vert_2,LOW);
  delay(10000);
  
  
  
}
