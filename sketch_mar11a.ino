void setup() { 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() { 
  analogWrite(5, 100); 
  analogWrite(6, LOW); 
  analogWrite(10, LOW); 
  analogWrite(11, 100); 
  delay(330);
  
  analogWrite(5, 100); 
  analogWrite(6, LOW); 
  analogWrite(10, 100); 
  analogWrite(11, LOW); 
  delay(1000);

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
