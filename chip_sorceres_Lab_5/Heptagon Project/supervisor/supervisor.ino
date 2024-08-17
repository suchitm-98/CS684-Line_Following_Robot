#include "alphabot_drivers.h"
#include "line_follower.h"
#include <SoftwareSerial.h>

SoftwareSerial xb = SoftwareSerial(8,9);
#define RIGHT_IR_SENSOR_PIN 4
#define LEFT_IR_SENSOR_PIN 7
#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
int flag=0;
Line_follower__main_out _res;
Line_follower__main_mem _mem;
int nodeFlag=0;
int nodeCounter=0;
int left_ir_val;
int right_ir_val;
// int 
void setup()
{
  // pinMode(LED_PIN,OUTPUT);
  // pinMode(JOYSTICK_X, INPUT);
  // pinMode(JOYSTICK_Y, INPUT);
  pinMode(RIGHT_IR_SENSOR_PIN,INPUT);
  pinMode(LEFT_IR_SENSOR_PIN,INPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  init_devices();
  forward();
  Line_follower__main_reset(&_mem);
  
  Serial.begin(9600);
  xb.begin(9600);
}

void loop()
{
  // digitalWrite(LED_PIN,HIGH);
    left_ir_val = digitalRead(LEFT_IR_SENSOR_PIN);
      right_ir_val = digitalRead(RIGHT_IR_SENSOR_PIN);
      AnalogRead(sensorValues);
      Serial.print(" ");
      Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4],left_ir_val,right_ir_val, nodeCounter, &_res, &_mem);
      Serial.print(nodeCounter);
      Serial.print(" ");
      
      if( (nodeCounter<2) && sensorValues[1]<700 && sensorValues[2]<700 && sensorValues[3]<700 && _res.st==2)
      {
        beep_on();
          nodeCounter++;
        SetSpeed(0,50);
          // forward_left();
          delay(500);
        beep_off();
      }
      else if( (nodeCounter>=2 && nodeCounter<=3) && sensorValues[1]<700 && sensorValues[2]<700 && sensorValues[3]<700 && _res.st==2)
      {
        beep_on();
        nodeCounter++;
        SetSpeed(50,0);
        //forward_right();
        delay(500);
        beep_off();
      }
      if(nodeFlag=4 && sensorValues[1]<700 && sensorValues[2]<700 && sensorValues[3]<700 && _res.st==2){
          //parking logic to be written
          forward();
      }
      for (int i = 0; i<NUM_SENSORS; i++)
      {
        Serial.print(sensorValues[i]);
        Serial.print("\t");
      }
      Serial.print(_res.v_l);
      Serial.print(" ");
      Serial.print(_res.v_r);
      Serial.print(" ");
      Serial.print(_res.st);
      Serial.println(" "); 
      // Serial.println(joystick_read());
      // Serial.print(" ");
      SetSpeed(_res.v_l, _res.v_r);
      if (_res.dir == 5)
      {
        right();
      }
      else if (_res.dir == 4)
      {
        left();
      }
      else if(_res.dir == 7){
        backward();
        SetSpeed(_res.v_r,_res.v_l);
        delay(1150);
        stop();
      }
      else if(_res.dir == 9){
        backward();
        SetSpeed(_res.v_r,_res.v_l);
        delay(1150);
        stop();
      }
      else
      {
        forward();
      }
  char receivedChar = xb.read();
  Serial.print("Received: ");
  Serial.println(receivedChar);
  if(receivedChar=='M')
  {
    Serial.println("Inside M");
    while(1)
    {
      Serial.println("Inside Loop");
      char receivedChar = xb.read();
      if(receivedChar=='F' || receivedChar=='B' || receivedChar=='L'|| receivedChar=='R') //Sweta Changed for controlling with remote
      {
        Serial.print("Received: ");
        Serial.println(receivedChar);
        if(receivedChar=='F')
        {
          Serial.println("Moving forward");
          forward();
          SetSpeed(70,70);
        }
        else if(receivedChar=='B')
        {
          Serial.println("Coming Back");
          backward();
          SetSpeed(70,70);
        }
        else if(receivedChar=='L')
        {
          Serial.println("Going Left");
          forward_left();
        }
        else
        {
          Serial.println("Going right");
          forward_right();
        }
      }
      else if (receivedChar=='O'){
        break;
      }
      else{
        stop();
      }
    }
  }
}