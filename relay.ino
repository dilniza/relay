#define r_p 2
// 

void setup() {
  pinMode (r_p, OUTPUT); 

}

void loop() {
  digitalWrite (r_p, HIGH);
  delay(1000*0.5);
  digitalWrite(r_p, LOW);
 delay(1000*0.5);
}
