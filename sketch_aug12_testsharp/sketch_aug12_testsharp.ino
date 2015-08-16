int sensorpin = 0;                 // analog pin used to connect the sharp sensor
int val = 0;                 // variable to store the values from sensor(initially zero)

#include <DistanceGP2Y0A21YK.h>
DistanceGP2Y0A21YK Dist;
int distance;

void setup() {

  Serial.begin(9600);               // starts the serial monitor
  Serial.println("Start reading values");
  Dist.begin(A0);
}

void loop() {
  
  distance = Dist.getDistanceCentimeter();
  Serial.print("\nDistance in centimeters: ");
  Serial.print(distance);
  delay(500);  
  
 // read the input on analog pin 0:
//  int sensorValue = 0;
//  for (int x = 0 ; x < 6 ; x++) {
//    sensorValue = sensorValue + analogRead(A0);
//  }
//  sensorValue = sensorValue / 6;
//  float Distance = pow((sensorValue / 1893.9), -1.087);   //This equation can vary from sensor to sensor
//  Serial.println(sensorValue);
//  Serial.println(Distance);
//
//  delay(1000);
  
  
}
