/*************************************************************************
* File Name          : connected_worker.ino
* Author             : HIC
* Version            : V0.1
* Date               : 15/10/2016
* Description        : Demo code for Grove - LED
*************************************************************************/
 
#define LED 2 //connect LED to digital pin2
void setup() {                
  // initialize the digital pin2 as an output.
  pinMode(LED, OUTPUT);     
}
 
void loop() {
  digitalWrite(LED, HIGH);   // set the LED on
  delay(500);               // for 500ms
  digitalWrite(LED, LOW);   // set the LED off
  delay(500);
}
