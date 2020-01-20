int redLed = 10;
int yellowLed = 9;
int greenLed = 8;

void setup(){
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
}

void loop(){
    trafficLights();
    delay(15000);
}

void trafficLights(){
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(3000);

    digitalWrite(yellowLed, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    digitalWrite(yellowLed, HIGH);
    delay(2000);

    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    delay(3000);
}
