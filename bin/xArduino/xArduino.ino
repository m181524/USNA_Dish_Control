/*  X Arduino for USNA 12m Dish
 *  version 1.0.0
 *  objective: provide a basic framework for X Arduino
 *  note: this code is intended for the 'X Arduino' which serves as the go-between for interfacing between the display/command
 *  Arduino and the X servo/shaft encoders. It receives serial commands from the display Arduino and outpus a PWM signal
 *  to the X servo on the dish, while receiving feedback from the US Digital HD25A Antenna Position Shaft Encoders for control
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

//  TTL in initializations
int prelimits = 0;     
int limFinal = 0;      
int xBrakeState = 0;   
int xDes = 0;

//  TTL out initializations
int xEnable = 0;
int xStrobe = 0;
int xBrakRel = 0;

//  Serial in initializations
int xPos = 0;

//  PWM out initializations
int xOut = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}


// Function definitions down here

//  Converts degrees to radians
int Deg2Rad(int deg){
  int output;
  output = .0174532925199433*deg;
  return output;
}

//  Converts radians to degrees
int Rad2Deg(int rad){
  int output;
  output = 57.2957795130823*rad;
  return output;
}


