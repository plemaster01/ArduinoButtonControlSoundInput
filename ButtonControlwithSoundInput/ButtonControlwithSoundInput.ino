const int optoPin = 2;  // the pin the optocoupler is connected to
const int noisePin = 8;
int noiseState = 0;

void setup() {
  // make the pin with the optocoupler an output
  pinMode(optoPin, OUTPUT);
  pinMode(noisePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  noiseState = digitalRead(noisePin); // read state of noise Gate
  if (noiseState == 0) {
    digitalWrite(optoPin, HIGH);
    Serial.println("1");
    delay(100);
    digitalWrite(optoPin, LOW);
    Serial.println("0");
  }
  delay(10);
}
