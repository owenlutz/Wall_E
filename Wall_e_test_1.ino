// Pin definitions
#define motor1Pin1 2
#define motor1Pin2 3
#define motor2Pin1 4
#define motor2Pin2 5

// Motor speed
#define motorSpeed 150
//This is all in setup to only run once for a test
void setup() {
  // Set the motor pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

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
  delay(500);

  // Move forward for 2 seconds
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor1Pin2, motorSpeed);
  analogWrite(motor2Pin
