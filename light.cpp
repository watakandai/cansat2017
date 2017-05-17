/**
* @file light.cpp
* @author Kandai Watanabe
* @date Created: 20170517
*/
#include "light.h"

Light::Light(int lightPin){
  _lightPin = lightPin;
  pinMode(_lightPin, INPUT);
}

Light::~Light(){
}

/**
* @fn void readLightValue()
* @brief read Light Sensor Value and save it
*/
void Light::readLightValue(){
  _lightValue = analogRead(_lightPin);
  // need some function to save its value
}

/**
* @fn int getLightValue()
* @brief return Light Sensor Value
* @return light Sensor Value
*/
int Light::getLightValue(){
  return _lightValue;
}