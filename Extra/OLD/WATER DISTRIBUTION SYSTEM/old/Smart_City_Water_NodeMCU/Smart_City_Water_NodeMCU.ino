#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#include<SoftwareSerial.h>
SoftwareSerial s(D6,D5); // RX TX
#define FIREBASE_HOST "smart-city-2883e.firebaseio.com"                   
#define FIREBASE_AUTH "KLPO7nSFcTmK7VHck8gbCZPBa7E9wlTaElDxKPf3"       
#define WIFI_SSID "OPPO A5"                                              
#define WIFI_PASSWORD "12345678"
#define led D4

int val1,val2;
int data = 10000;

void setup() {
 s.begin(9600);
  Serial.begin(19200);
  pinMode(led,OUTPUT);

  WiFi.begin(WIFI_SSID,WIFI_PASSWORD);
  Serial.print("Connecting...");
  while(WiFi.status()!=WL_CONNECTED){
      Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected:");
  Serial.println(WiFi.localIP());
 
   //connecting to firebase 

  Firebase.begin(FIREBASE_HOST,FIREBASE_AUTH);
  Firebase.setInt("water_level/level",0);
  Firebase.setInt("water_level/moto_status",0);
}
void firebasereconnect()
{
  Serial.println("Trying to reconnect");
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() 
{
  
  if (Firebase.failed())
      {
      Serial.print("setting number failed:");
      Serial.println(Firebase.error());
      firebasereconnect();
      return;
      }
      s.write("s");
  if(s.available() >= 0)
  {
    data = s.read();
    if(data>=0)
    {
      //ThingSpeak.writeField(channelNumber, 1, data, WriteAPI);
      Firebase.setInt("water_level/level",data);
    //Serial.println("Uploading Data");
    //Serial.println("\t\tLevel="+String(data)); 
    Serial.println(data); 
    Serial.println(); 
    //Serial.println(); 
    //delay(1000);    
    }
      /*
  digitalWrite(trigpin,LOW);
  delay(2);
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);    //taking the value of ultrasonic sensor for water tank reading
  distance=duration*0.034/2;
  Serial.println(distance);
  if(distance<=12 && distance>10){
    Firebase.setInt("water_level/level",1); //setting the value of "level" to 1 into the firebase
  }else if(distance<=10 && distance>8){
    Firebase.setInt("water_level/level",2);
  }else if(distance<=8 && distance>6){
    Firebase.setInt("water_level/level",3);
  }else if(distance<=6 && distance>4){
    Firebase.setInt("water_level/level",4);
    
  }else if(distance<=4 && distance>0){
    Firebase.setInt("water_level/level",5);
    
  }else{
    Firebase.setInt("water_level/level",0);
    
  }
  */
  val1=Firebase.getInt("water_level/level");                          
     
  if(val1==0){
    Firebase.setInt("water_level/moto_status",1);
    delay(5);
  }
  if(val1==5){
    Firebase.setInt("water_level/moto_status",0);
    delay(5);
  }

  val2=Firebase.getInt("water_level/moto_status");
  if(val2==1){
    digitalWrite(led,HIGH);
    delay(10);
  }else{
    digitalWrite(led,LOW);
    delay(10);
  }
                            
  
}}
