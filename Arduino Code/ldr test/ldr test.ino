void setup() {
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
}

void loop() {

  '''
  view serial window and see the results live.
  each pin is each ldr respectively connected to arduino.
  '''

  Serial.print(digitalRead(9)'\n');
  Serial.print(digitalRead(10)'\n');
  Serial.print(digitalRead(11)'\n');
  Serial.print(digitalRead(12)'\n');
  print('-----------\n')

}
