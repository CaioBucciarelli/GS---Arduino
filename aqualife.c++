const int analogInPin = A0;
int vermelho = 9;
int amarelo = 10;
int verde = 11;
float volts = 0.0;

int sensorValue = 0;
int outputValue = 0;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	sensorValue = analogRead(analogInPin);
  	volts = sensorValue * 5.0 / 1023.0;
  
  if (volts <= 2){
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, HIGH);
  }
  else if(volts <= 4){
    digitalWrite(verde, LOW);
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, HIGH);
  }
  else{
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
  }
  		
  	delay(2000);
}