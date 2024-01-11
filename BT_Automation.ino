#define relay 2

char data;

void setup() {
  pinMode(relay, OUTPUT);
  Serial.begin(9600);

  digitalWrite(relay, HIGH);
}


void loop() {
  if (Serial.available() == 1) {
    data = Serial.read();
    
    if (data == 'A') {
      digitalWrite(relay, LOW);
    } else if (data == 'a') {
      digitalWrite(relay, HIGH);
    }
  }
}
