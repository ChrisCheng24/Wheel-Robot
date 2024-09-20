void setup() { 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() { 
  analogWrite(5, 100);  // Left wheel forward
  analogWrite(6, LOW);  // Left wheel backward off
  analogWrite(10, LOW); // Right wheel backward off
  analogWrite(11, 100); // Right wheel forward
  delay(330);           // Move forward for 330ms
  
  analogWrite(5, 100);  // Left wheel forward
  analogWrite(6, LOW);  // Left wheel backward off
  analogWrite(10, 100); // Right wheel backward
  analogWrite(11, LOW); // Right wheel forward off
  delay(1000);          // Turn for 1 second

//  analogWrite(5, 200); 
//  analogWrite(6, LOW); 
//  analogWrite(10, ); 
//  analogWrite(11, LOW); 
//  delay(3000); 
  

//  analogWrite(5, 200); 
//  analogWrite(6, LOW); 
//  analogWrite(10, LOW); 
//  analogWrite(11, LOW); 
//  delay(790);
} 
