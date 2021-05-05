const int relay = 33;

int count = 0;

void setup() {
  pinMode (relay, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  digitalWrite(relay, HIGH);
  if(count == 15){
    digitalWrite(relay, LOW);
    delay(60000*10);
    digitalWrite(relay, HIGH);
    count += 10;
  }
  count++;
  Serial.println("next");
  if(count > 10080){
    count = 0;
  }
  delay(60000);
}
