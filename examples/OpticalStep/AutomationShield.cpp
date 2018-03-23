#include "AutomationShield.h"

//--------------------------------------
// Optical Shield
//--------------------------------------

void OpticalClass::begin(void){
// Example begin function
  pinMode(OPTICAL_UPIN,OUTPUT); // Set output pin
}

void OpticalClass::input(float u){
  u = constrain(u,0.0,100.0); //Constrains to 0-100%
  int uPWM = map((int)u,0,100,0,255);
  analogWrite(OPTICAL_UPIN,uPWM);
}

float OpticalClass::output(void){
  //
}

OpticalClass Optical;

//--------------------------------------
// Optical Shield
//--------------------------------------

// Motor shield....:
