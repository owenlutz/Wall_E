// Pin definitions
#define motor1Pin1 2
#define motor1Pin2 3
#define motor2Pin1 4
#define motor2Pin2 5

// Motor speed (We can edit this to whatever is needed)
#define motorSpeed 150


void setup() {
 // Setting motorpins to outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
//Ultrasonic sensor pins
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication

}
//The current loop has no corrections for sensor input, etc, but we can easily add those once we know this basic system works. 
void loop() {
  

  //This is the code to get Wall-E to repeat a small sequence of movements. 
  // Move forward for 2 seconds
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin2, motorSpeed);
  delay(2000);

  // Turn right 90 degrees
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin1, motorSpeed);
  delay(1000);

  // Move for 0.5 seconds
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin2, motorSpeed);
  delay(500);

  // Turn right 90 degrees
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin1, motorSpeed);
  delay(1000);

  // Move for 2 seconds
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin2, motorSpeed);
  delay(2000);

  // Turn left 90 degrees
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor1Pin1, motorSpeed);
  analogWrite(motor2Pin2, motorSpeed);
  delay(1000);

  // Move for 0.5 seconds
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin2, motorSpeed);
}
