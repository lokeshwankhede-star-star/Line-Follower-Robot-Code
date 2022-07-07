#define IR1 2;  // Left IR 1
#define IR2 3;  // Right IR 2



void setup() {
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT); 
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  int ls = digitalRead(IR1); //leftsensor
  int rs = digitalRead(IR2);  //rightsensor

   if(ls== LOW && rs==LOW)
   {
    digitalWrite(8,LOW);     // Motors Signal give from sensor and give it to motor
    digitalWrite(9,LOW);    // Motors
    digitalWrite(10,LOW);    // Motors stop running
    digitalWrite(11,LOW);
   }
   if(ls== LOW && rs==HIGH)
   {
    digitalWrite(8,HIGH);    
    digitalWrite(9,LOW);    // motor turn right
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
   }
   if(ls== HIGH && rs==LOW)
   {
    digitalWrite(8,LOW);     
    digitalWrite(9,LOW);    // motor turn right
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
   }
   if(ls== HIGH && rs==HIGH)
   {
    digitalWrite(8,HIGH);     // Motors go forward direction
    digitalWrite(9,LOW);    
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
   }













   
}
