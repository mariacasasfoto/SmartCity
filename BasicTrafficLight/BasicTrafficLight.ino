int redLed = 1;
int yellowLed = 59;
int greenLed = 100;

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
