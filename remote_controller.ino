#include <SoftwareSerial.h>
#include <ezButton.h>
#define rxPin 2
#define txPin 3

SoftwareSerial xbee =  SoftwareSerial(rxPin, txPin);

#define VRX_PIN  A4 // Arduino pin connected to VRX pin
#define VRY_PIN  A3 // Arduino pin connected to VRY pin
#define SW_PIN   A2  // Arduino pin connected to SW  pin

ezButton button(SW_PIN);
ezButton limitSwitch(7);//left switch
ezButton limitSwitch2(6);//right switch


int xValue = 0; // To store value of the X axis
int yValue = 0; // To store value of the Y axis
int bCount = 0;
int limitCount=0;
int prevbCount = 0;
void setup() {
  Serial.begin(9600) ;
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
  limitSwitch.setDebounceTime(50);
  limitSwitch2.setDebounceTime(50);
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  xbee.begin(9600);
}
void loop() {
  limitSwitch.loop();
  limitSwitch2.loop();

  if (limitSwitch.isPressed() && limitCount==0) {
    limitCount++;
    xbee.write("S");
    Serial.print("Written to xbee to start");
  }
  if(limitSwitch2.isPressed()){
    limitCount=0;
    xbee.write("G");
    Serial.print("Resetting the Alphabot");
  }
  button.loop();
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);
  Serial.print("x = ");
  Serial.print(xValue);
  Serial.print(", y = ");
  Serial.print(yValue);
  Serial.print("    ");
  Serial.println(bCount);
  if(button.isPressed() && bCount==0){
    bCount++;
    xbee.write("M");
  }
  else if(button.isPressed() && bCount==1){
    bCount--;
    xbee.write("O");
  }
  if(bCount==1){
      if(xValue>650)
        xbee.write("L");
      else if(yValue>650)
        xbee.write("F");
      else if(xValue<350)
        xbee.write("R");
      else if(yValue<350)
        xbee.write("B");
      Serial.println("Sending Signals");      
  }
}

