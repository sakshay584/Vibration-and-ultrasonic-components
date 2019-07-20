int vib_pin=51;
int led_pin=13;
void setup() {
  pinMode(vib_pin,INPUT);
  pinMode(led_pin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val;
  val=digitalRead(vib_pin);
  Serial.println(val);
  if(val==1)
  {
    digitalWrite(led_pin,HIGH);
    delay(100);
    digitalWrite(led_pin,LOW);
    delay(100);
   }
   else
   digitalWrite(led_pin,LOW);
}
