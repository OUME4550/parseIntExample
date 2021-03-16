void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Enter any number:");
  //Increases the wait time to read, default is 1 second.
  Serial.setTimeout(10000);
  int newnumber = Serial.parseInt();
  Serial.print("\r\nYou entered:");
  Serial.println(newnumber);
}
