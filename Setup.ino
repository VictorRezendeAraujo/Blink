//Blink
void setup(){
 pinMode(LED_BUILTIN, OUTPUT);//Define a porta do LED como "OUTPUT".
}
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);   // Acende o LED
  delay(1000);                       // Espera 1000ms(1 segundo)
  digitalWrite(LED_BUILTIN, LOW);    // Desliga o LED
  delay(1000);                       // Espera 1000ms(1 segundo)
}
