// This simple code allow you to send data from Arduino to Unity3D.

void setup() {
  Serial.begin(9600); // You can choose any baudrate, just need to also change it in Unity.
  while (!Serial); // wait for Leonardo enumeration, others continue immediately
}

// Run forever
void loop() {
  String a = "";
  
  if (Serial.available() > 0) {
    a= Serial.readString();// read the incoming data as string
  }

  Serial.println("toto: ");
  Serial.println(a);
  
  delay(20);
  
    /*readData();
     // Choose your delay having in mind your ReadTimeout in Unity3D*/

}

void sendData(String data){
  Serial.println(data); // need a end-line because wrmlh.csharp use readLine method to receive data
}

void readData() {
  String incoming = "";

  incoming = Serial.readString();

  // if (incoming != "" && incoming != NULL)
    Serial.println(incoming);
}

