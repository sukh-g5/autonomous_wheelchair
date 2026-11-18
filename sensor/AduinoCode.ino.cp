//ArduinoCode 

// Pins 

#define enA 3 

#define in1A 4 

#define in2A 5 

 

//Setup 

void setup() { 

  Serial.begin(9600); 

 

  // Motor driver 

  pinMode(enA, OUTPUT); 

  pinMode(in1A, OUTPUT); 

  pinMode(in2A, OUTPUT); 

} 

 

void loop() { 

  motorForward()  

  delay(4900); 

  motorReverse() 

  delay(100000); 

} 

 

//Functions3 

 

void motorForward() { 

  analogWrite(enA, 255); 

  digitalWrite(in1A, HIGH); 

  digitalWrite(in2A, LOW); 

} 

 

void motorReverse() { 

  analogWrite(enA, 255); 

  digitalWrite(in1A, LOW); 

  digitalWrite(in2A, HIGH); 

} 

Launch code: 
//Pins 

#include <Servo.h> 

#define servoPin 10  

 

#define trigPin 9 

#define echoPin 8 

 

#define enA 3 

#define in1A 4 

#define in2A 5 

 

long duration; 

int distance; 

 

Servo myServo; 

bool servoActivated = false; 

 

//Setup 

void setup() { 

  pinMode(trigPin, OUTPUT); 

  pinMode(echoPin, INPUT); 

 

  pinMode(enA, OUTPUT); 

  pinMode(in1A, OUTPUT); 

  pinMode(in2A, OUTPUT); 

 

  myServo.attach(servoPin);  

  myServo.write(0); 

  motorStop(); 

  } 

 

void loop() { 

  distance = getDistance(); 

 

if (distance < 15) { 

    motorReverse(); 

  } 

  else if (distance <= 25) { 

    motorStop(); 

 

    if (!servoActivated)4 { 

      myServo.write(90); 

      servoActivated = true; 

    } 

  } 

  else { 

    motorForward(); 

  } 

} 

 

//Functions 

 

int getDistance() { 

  digitalWrite(trigPin, LOW); 

  delayMicroseconds(2); 

  digitalWrite(trigPin, HIGH); 

  delayMicroseconds(10); 

  digitalWrite(trigPin, LOW); 

  long duration = pulseIn(echoPin, HIGH); 

  int distance = duration * 0.034 / 2; 

  return distance; 

   

} 

 

void motorForward() { 

  analogWrite(enA, 200); 

  digitalWrite(in1A, HIGH); 

  digitalWrite(in2A, LOW); 

} 

 

void motorReverse() { 

  analogWrite(enA, 200); 

  digitalWrite(in1A, LOW); 

  digitalWrite(in2A, HIGH); 

} 

 

void motorStop() { 

  analogWrite(enA, 0); 

  digitalWrite(in1A, LOW); 

  digitalWrite(in2A, LOW); 

}