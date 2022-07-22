void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);  // Y Punto Largo Dura 3 segundos
  delay(300);                       
  digitalWrite(LED_BUILTIN, LOW);   //Punto Cortos Dura 1 segundo
  delay(100);                      
  digitalWrite(LED_BUILTIN, HIGH);  //Punto Largo Dura 3 segundos
  delay(300); 
  digitalWrite(LED_BUILTIN, LOW);   //Punto Largo Dura 3 segundos
  delay(300);
  
  digitalWrite(LED_BUILTIN, HIGH);  // A Punto Cortos Dura 1 segundo
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);   // Punto Largo Dura 3 segundos
  delay(300); 
  
  digitalWrite(LED_BUILTIN, HIGH);  // I Punto Cortos Dura 1 segundo
  delay(100);                       
  digitalWrite(LED_BUILTIN, LOW);   //Punto Cortos Dura 1 segundo
  delay(100);                      
  
  digitalWrite(LED_BUILTIN, HIGH);  //R Punto Cortos Dura 1 segundo
  delay(100); 
  digitalWrite(LED_BUILTIN, LOW);   //Punto Largo Dura 3 segundos
  delay(300);
  digitalWrite(LED_BUILTIN, HIGH);  //Punto Cortos Dura 1 segundo
  delay(100);
  
}
