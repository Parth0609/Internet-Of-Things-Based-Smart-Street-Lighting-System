#include<ESP8266WiFi.h>
bool irb1, ire1,irb2,ire2; 
#define IRb1 D0
#define IRe1 D1
#define IRb2 D5
#define IRe2 D6
#define L1 D4
#define L2 D8
void setup() { 
 Serial.begin(115200); 
 pinMode(IRb1, INPUT); 
 pinMode(IRe1, INPUT); 
 pinMode(IRb2, INPUT); 
 pinMode(IRe2, INPUT); 
 pinMode(L1, OUTPUT); 
 pinMode(L2, OUTPUT); 
 digitalWrite(L1, 1); 
 digitalWrite(L2, 1); 
} 
void loop() { 
 digitalWrite(L1, 1); 
 static int R1 = 0; 
 static int R2 = 0; 
 irb1 = digitalRead(IRb1); 
 ire1 = digitalRead(IRe1); 
 irb2 = digitalRead(IRb2); 
 ire2 = digitalRead(IRe2); 
 if (irb1 == 0) 
 { 
 Serial.println("car entered 1"); 
 digitalWrite(L1, 0); 
 R1 = R1 + 1; 
 delay(1000); 
 } 
 if (ire1 == 0 && R1 != 0) 
 { 
 R1 = R1 - 1; 
 Serial.println("car exited 1"); 
 if (R1 == 0) 
 { 
 Serial.println("lights on road 1 finally off"); 
 digitalWrite(L1, 1); 
 } 
 delay(1000); 
 } 
 
 if (irb2 == 1) 
 { 
 Serial.println("car entered 2"); 
 digitalWrite(L2, 0); 
 R2 = R2 + 1; 
 delay(1000); 
 } 
 if (ire2 == 1 && R2 != 0) 
 { 
 if(R2 != 0) 
 { 
 R2 = R2 - 1; 
 Serial.println("car exited 2"); 
 if (R2 == 0) 
 { 
 Serial.println("lights on road 2 finally off"); 
 digitalWrite(L2, 1); 
 } 
 delay(1000); 
 } 
 } 
} 
