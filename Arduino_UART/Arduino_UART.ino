void setup() {
  pinMode(8, INPUT_PULLUP); // set push button pin as input
  pinMode(13, OUTPUT);      // set LED pin as output
  digitalWrite(13, LOW);    // switch off LED pin

  Serial.begin(115200);       // initialize UART with baud rate of 9600 bps
}

void loop() {

  Serial.write("t");

  delay(1000);

  Serial.write("k");

  delay(1000);

  /*
  if(Serial.available()) {
    char data_rcvd = Serial.read();   // read one byte from serial buffer and save to data_rcvd
    Serial.print(data_rcvd);
    if(data_rcvd == 't') digitalWrite(13, HIGH);  // switch LED On
    if(data_rcvd == 'k') digitalWrite(13, LOW);   // switch LED Off
  }
  */
}
