
//-------------------------------------------------------------------------
// 2019/05/21
//
// S James Parsons Jr
// www.Celleleven.com/hardware/polarimeter
//
//-------------------------------------------------------------------------
// Documentation
//1602 LCD https://www.sparkfun.com/tutorials/289
//
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// +++ Libraries +++
#include <SoftwareSerial.h>
#include <Stepper.h>
//-------------------------------------------------------------------------
// +++ Variables +++
//PINs
int A0_pin = A0;
int A1_pin = A1;  //
int A2_pin = A2;
int Serial_LCD = A3; // SoftwareSerial to LCD 1602
int IC2_pinA = A4; //RJ11 -> I2C SDA
int IC2_pinB = A5; //RJ11 -> I2C SCL

int D0_pin = D0; // RX
int D1_pin = D1; // TX
int D2_pin = D2; // Interupt
int D3_pin = D3; //Interupt, PWM
int D4_pin = D4;
int D5_pin = D5; //PWM
int D6_pin = D6; //PWM
int D7_pin = D7;

// int D8_pin = D8;
// int D9_pin = D9; //PWM
// int D10_pin = D10; // SS, PWM
// int D11_pin = D11; // MOSI, PWM
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11); // Stepper Pins 8-11

int D12_pin = D12; // MISO
int LED_pin = 13; // LED, SCK

// SPi: MOSI, MISO, SCK, RESET, VCC, GND
// A4 (SDA), A5 (SCL)

SoftwareSerial lcd(2, 3);


//-------------------------------------------------------------------------
// +++ Functions +++
void Calibrate(){
  Serial.println("Calibrating");  // Run from 360° to find 0-90-180-270
  /* First start by checking if the LED is seen via the photodiode
  Then start by stepping until the LED is no longer seen.  That should
  be 90° Step back 1/4 (4000) so 1000 steps to get back to full intensidty.
  Dec_zero = Step_Count_zero
  Dec_90 = Step_Count_90
  Dec_n90  = Step_Count_n90
  Should I over shoot to dial in the apex? YES
  LCD Message if no light visible LED or Stepper malfunction

  Now Calibrate Temperture.  Get current Tempterture cTemp = Pin_A
  Activeate Peltier and Fan
  Pin_A4 = Set High
  Loop Tempture Sampling until Temp is 20°
  Safty, If No Change in 1000 milliseconds
  LCD Message Temperture Error
  LCD No ∇T in 1 second

  */
  //myStepper.step(stepsPerRevolution);
}
void RunSample(){
  Serial.println("Running");  // LCD Running + Currevent Angle Value
  LCD.println("Running Sample")
  /*
  Fun_Cool Solution until 20°
  Fun_ Run 180°sample Read
  LCD.println("Running\n")

  */
}

void I2C_run(){
  Serial.println("I2C");  // step one revolution  in one direction:

}

void Cool_Solution(){

}

void TestSample(){

}

void timeTest(){

}


void displayLCD(text){
// Custom LCD symbol https://omerk.github.io/lcdchargen/
// Demo LCD text http://avtanski.net/projects/lcd/
}

//-------------------------------------------------------------------------
// +++ Setup +++
void setup(){
  Serial.begin(9600);  // start serial monitor serial
  lcd.begin(9600);  // start lcd serial

  myStepper.setSpeed(60); // set the speed at 60 rpm:

}


//-------------------------------------------------------------------------
// +++ Loop +++
void loop()
{
  while(Serial.available())  // If serial data is available do this
    lcd.print((char) Serial.read());
}
