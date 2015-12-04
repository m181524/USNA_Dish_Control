/*  Display Control Arduino for USNA 12m Dish
 *  version 1.0.0
 *  objective: provide a basic framework for display Arduino 
 *  note: this code is intended for the first 'display Arduino' which serves as the primary input/output controller for 
 *  the dish controller, and controls all indicators and high level variables, and outputs signals to the two serial 
 *  interfaces and the X and Y Arduinos. For full reference, look to Prof. Bruninga's diagram, which lays out all the needed
 *  information: www.ew.usna.edu/~bruninga/DishController.GIF.
 *  
 *  04DEC2015
 *  Created by: MIDN Connor Dittmar
 *  m181524@usna.edu
 *  connor.dittmar@gmail.com
 */

//  Global Variable initializations
const int pi = 3.1415926535;
const int hydLo = ; //don't know what our min value is for this yet

//  Indicator light initializations (these will be green/amber/red tri-color LEDS)
int powerIndPin = 2;    //power indicator light
int localremIndPin = 3; //local/remote control indicator light
int pumplimIndPin = 4;  //Pump/Operating/limits indicator light
int intlimIndPin = 5;   //Interlocks/operating/limits indicator light
int xonlimIndPin  = 6;  //X enabled/operating/limits indicator light
int yonlimIndPin = 7;   //Y enabled/operating/limits indicator light
int 

//  Control Input/Output initializations

//  Local variable initializations
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


