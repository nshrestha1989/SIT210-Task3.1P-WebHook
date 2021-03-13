    // This #include statement was automatically added by the Particle IDE.
    #include <ThingSpeak.h>
    
    // This #include statement was automatically added by the Particle IDE.
    #include <Adafruit_DHT.h>
    
    //defining the type sensor type DHT22
    #define DHTTYPE  DHT22 
    
    // Digital pin connected to the DHT sensor
    #define DHTPIN   7
    
    // Initialize DHT sensor.
    DHT dht(DHTPIN, DHTTYPE);



void setup() {

//starting the DHT22 sensor
dht.begin();

}

void loop() {

         // read temp and convert the value into String
	String temp = String(dht.getTempCelcius()); 
 
    
        // Trigger the webhook
        
    Particle.publish( "temp" ,temp ,PRIVATE);  
        
        //30 sec delay
    delay(30000);

}