/*  Y Arduino for USNA 12m Dish
 *  version 1.0.0
 *  objective: provide a basic framework for Y Arduino
 *  note: this code is intended for the 'Y Arduino' which serves as the go-between for interfacing between the display/command
 *  Arduino and the Y servo/shaft encoders. It receives serial commands from the display Arduino and outpus a PWM signal
 *  to the Y servo on the dish, while receiving feedback from the US Digital HD25A Antenna Position Shaft Encoders for control
 *  implementation. For full reference, look to Prof. Bruninga's diagram, which lays out all the needed
 *  information: www.ew.usna.edu/~bruninga/DishController.GIF.
 *  
 *  note: many of the specific hardcoded limits and failsafes in these programs are not yet specified. I will consult the 
 *  schematics and include them.
 *  
 *  04DEC2015
 *  Created by: MIDN Connor Dittmar
 *  m181524@usna.edu
 *  connor.dittmar@gmail.com
 */

//  Global Variable initializations
const int pi = 3.1415926535;
const int Deg2Rad = 0.0174532925199433;
const int Rad2Deg = 57.2957795130823;
float az;
float el;
float x;
float y;
float cosEl;
float tanEl;


//  TTL in initializations
float prelimits = 0;     
float limFinal = 0;      
int yBrakeState = 0;   
float yDes = 0;

//  TTL out initializations
int yEnable = 0;
int yStrobe = 0;
int yBrakRel = 0;

//  Serial in initializations
float yPos = 0;

//  PWM out initializations
float yOut = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}


// Function definitions down here

struct xy {
  float x;
  float y;
}

//Converts from xy coordinates in degrees to Azimuth/Elevation
int xy2azel(int x, int y){
  int output;
  if (y != 0) {
    x = x * Deg2Rad;
    y = y * Deg2Rad;  
    az = atan(sin(x) / tan(y));
    cosEl = sin(y) / cos(az);
    tanEl = sqrt(1 - pow(cosEl,2)) / cosEl;
    el = atan(tanEl) * Rad2Deg;
    az = az * Rad2Deg;
  }
  else {
    az = 90;
  }
  if (x < 0) {
    az = 270;
  }
  if (y < 0) {
    az = 180 + az;
    el = -el;
  }
  if (x < 0 && y > 0) {
    az = 360 + az
  }
  output =  {
}

int azel2xy(int az, int el){
  
}



