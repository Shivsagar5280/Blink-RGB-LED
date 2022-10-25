int RedLed=3;

int GreenLed=4;

int BlueLed=5;

void setup(){

pinMode(RedLed,OUTPUT);

pinMode(GreenLed,OUTPUT);

pinMode(BlueLed,OUTPUT);

  }

void loop(){

digitalWrite(RedLed,HIGH);

delay(1000);

digitalWrite(RedLed,LOW);

digitalWrite(GreenLed,HIGH);

delay(1000);

digitalWrite(GreenLed,LOW);
digitalWrite(BlueLed,HIGH);

delay(1000);
digitalWrite(BlueLed,LOW);

 }
