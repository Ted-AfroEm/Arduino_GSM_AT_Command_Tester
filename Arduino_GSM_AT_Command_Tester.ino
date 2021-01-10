
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11);  //RX,TX

void setup()
{
Serial.begin(19200);
mySerial.begin(19200);
Serial.println("");
Serial.println("Remember to to set Both NL & CR in the serial monitor.");
Serial.println("Ready");
Serial.println("");   

}

void loop()
{
if (mySerial.available())
Serial.write(mySerial.read());
if (Serial.available())
mySerial.write(Serial.read());

}


/*****************TCP Commnication*/
/*
AT
AT+CGATT=1;
AT+CIPMUX=0;
AT+CSTT="etc","","";
AT+CIICR
AT+CIFSR
AT+CIPSTART="TCP","52.20.16.20","30000"
AT+CIPSEND
the network  closes on this part

AT+CIPSHUT
*/



/***********************HTTPS Get Method**************************/
/*
HTTPS Get Method
 * 
//close GPRS
AT+SAPBR =0,1
//terminate HTTP
AT+HTTPTERM

AT+SAPBR=3,1,"Contype","GPRS"
AT+SAPBR=3,1,"APN","CMNET"
AT+SAPBR =1,1
AT+SAPBR=2,1

AT+HTTPINIT
AT+HTTPSSL=1
AT+HTTPPARA="CID",1
AT+HTTPPARA="URL","https://gcpro.herokuapp.com/teset/getdata"
AT+HTTPACTION=0
AT+HTTPREAD

*/
