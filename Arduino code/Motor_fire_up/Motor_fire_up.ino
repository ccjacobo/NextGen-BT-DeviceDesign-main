// turning on the motor 

const int MOTOR = 2;

void setup() 

{

  Serial.begin(115200);

  pinMode(MOTOR,OUTPUT);

}

void loop() 
{
  digitalWrite(MOTOR, HIGH);// turn on the motor 
  delay(1000);// wait 1 second 
  digitalWrite(MOTOR, LOW); // turn off motor 
  delay(2000); // wait 2 seconds 


}
