#include "Mouse.h"

int cps = 35; //clicks per second (approximate)

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  //initiate the Mouse library
  Mouse.begin();
}

void loop(){
  //if the button is pressed, send a Right mouse click
  if (digitalRead(2) == HIGH) {
    // if the mouse is not pressed, press it:
    if (!Mouse.isPressed(MOUSE_RIGHT)) {
      Mouse.press(MOUSE_RIGHT);
    }
  }
  // else the mouse button is not pressed:
  else {
    // if the mouse is pressed, release it:
    if (Mouse.isPressed(MOUSE_RIGHT)) {
      Mouse.release(MOUSE_RIGHT);
    }
  }
  if(digitalRead(3) == HIGH){
    Mouse.click(MOUSE_LEFT);
    delay(1000/cps);
  }
  if(digitalRead(4) == HIGH){

}

