int led = 13;               

int sensor = 2;              

int state = LOW;             // default, tiada pergerakan

int val = 0;                 

 

void setup() {

  pinMode(led, OUTPUT);      

  pinMode(sensor, INPUT);    

  Serial.begin(9600);       

}

 

void loop(){

  val = digitalRead(sensor);   

  

  if (val == HIGH) {           

    digitalWrite(led, HIGH);   

    delay(100);                

    

    if (state == LOW) {        //LED ON

      Serial.println("Motion detected!"); 

      state = HIGH;           // update variable state to HIGH

    }

  } 

  else {

      digitalWrite(led, LOW); // LED off

      delay(200);             

      

      if (state == HIGH){

        Serial.println("Motion stopped!");

        state = LOW;       // update variable state to LOW

    }

  }

}

 
