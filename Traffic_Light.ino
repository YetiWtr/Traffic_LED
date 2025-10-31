const int LED_Green = 33; //Green LED
const int LED_Yellow = 25;//Yellow LED
const int LED_Red = 26;//Red LED
void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);
  Serial.println("Hey, we are about to start blinking the LED");
  
  pinMode(LED_Green,OUTPUT); // We set the LED pin to be an OUTPUT pin
  pinMode(LED_Yellow,OUTPUT);
  pinMode(LED_Red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_Green, HIGH);//Green light is on
  delay(5000);//Green light is on for 700 ms
  digitalWrite(LED_Green,LOW);//Green is off
  
  digitalWrite(LED_Yellow, HIGH);//Yellow light is on 
  delay(3500);//Yellow light is on for 450 ms
  digitalWrite(LED_Yellow,LOW);// Yellow light is off
  
  digitalWrite(LED_Red, HIGH);
  delay(7500);//Red light is on for 700 ms
  digitalWrite(LED_Red,LOW);//Red light is off
  
}
