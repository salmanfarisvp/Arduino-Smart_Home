/*  Salman Faris */
/*Farissalmannbr@gmail.com*/
/*7736626642*/




byte val;

void setup()
{
  Serial.begin(9600);//Change the baud rate value depending on the default baud rate of your bluetooth module, for Bluesmirf-115200 and for JY-MCU-9600
  
  pinMode(2, OUTPUT);//Light1 pin
  pinMode(3, OUTPUT);//Light2 pin
  pinMode(4, OUTPUT);//Light3 pin
  pinMode(5, OUTPUT);//AC pin
  pinMode(6, OUTPUT);//Door Lock
}

void loop()
{
 int a=0;
 if(Serial.available())
  {
    val=Serial.read();
    Serial.println(int(val));//Display received value on Serial Monitor

if(int(val)==49)//Turn Light1 ON
   digitalWrite(2,HIGH);

 else if (int(val)==50)//Turn Light1 OFF
         digitalWrite(2,LOW);

if(int(val)==51)//Turn Light2 ON
   digitalWrite(3,HIGH);
   
 else if(int(val)==52)//Turn Light2 OFF
      digitalWrite(3,LOW);
      
if(int(val)==53)//Turn Light3 ON
   digitalWrite(4,HIGH);

 else if(int(val)==54)//Turn Light3 OFF
       digitalWrite(4,LOW);
       
if(int(val)==55)//Turn AC ON
   digitalWrite(5,HIGH);
   
 else if(int(val)==56)//Turn AC OFF
       digitalWrite(5,LOW);
       
if(int(val)==57)//Lock the DOOR
   digitalWrite(6,HIGH);
   
 else if(int(val)==48)//Unlock the DOOR
       digitalWrite(6,LOW);

}
}


















