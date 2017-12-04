/*
    Welcome to Gingerbread with LED workshop presented by Design Lab and Technovus!
    Feel free to ask away any questions!
    
    created DEC 2, 2017
    @Technovus 2017
*/

// define sonar pins numbers
int echoPin = 2;
int trigPin = 3;

// define other variables
int duration = 0;
int distance = 0;
int mappedValue = 0;

// define LED pins
int led_1 = 6;
int led_2 = 9;
int led_3 = 10;
int led_4 = 11;

void setup() {
    //Setup pins and serial
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input

    Serial.begin(9600); // Starts the serial communication
}
void loop() {
    // Toggle the trigger pin to send a pulse
    digitalWrite(trigPin, HIGH);
    digitalWrite(trigPin, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);

    // Wait 18000 microseconds to make sure all of the initial signal is dissipated
    delayMicroseconds(18000);

    // Calculating the distance; distance = time x speed
    // time of sound in air a constant; unit used is CM/MicroSeconds
    distance = duration*0.034/2;

    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);

    //scales the distance into values for LED
    mappedValue = map(distance, 0, 300, 0, 255);
    delay(50);

    if (distance > 300) {
        analogWrite(led_1,255);
        analogWrite(led_2,255);
        analogWrite(led_3,255);
        analogWrite(led_4,255);
    }
    //Else if distance is out of range, set LED to max value
    else {
        analogWrite(led_1,mappedValue);
        analogWrite(led_2,mappedValue);
        analogWrite(led_3,mappedValue);
        analogWrite(led_4,mappedValue);
    }
}