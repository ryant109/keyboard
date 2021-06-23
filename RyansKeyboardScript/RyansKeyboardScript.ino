#include "Keyboard.h"

// constants won't change. They're used here to set pin numbers:
const int buttonOne   = 8;     // the number of the pushbutton pin
const int buttonTwo   = 6;     // the number of the pushbutton pin
const int buttonThree = 5;     // the number of the pushbutton pin
const int buttonFour  = 3;     // the number of the pushbutton pin
const int buttonFive  = 2;     // the number of the pushbutton pin
const int buttonSix   = 4;     // the number of the pushbutton pin
const int buttonSeven = 7;     // the number of the pushbutton pin
const int buttonEight = 9;     // the number of the pushbutton pin
char ctrlKey = KEY_LEFT_CTRL;

// variables will change:
int ButtonOneState = 0;   
int ButtonTwoState = 0;     
int ButtonThreeState = 0;     
int ButtonFourState = 0;    
int ButtonFiveState = 0;     
int ButtonSixState = 0;    
int ButtonSevenState = 0;     
int ButtonEightState = 0;     


//All of the button states
int lastButtonOneState = 0;   
int lastButtonTwoState = 0;     
int lastButtonThreeState = 0;     
int lastButtonFourState = 0;    
int lastButtonFiveState = 0;     
int lastButtonSixState = 0;    
int lastButtonSevenState = 0;     
int lastButtonEightState = 0;     


int buttonOnePushCounter =0;
int buttonTwoPushCounter =0;
int buttonThreePushCounter =0;
int buttonFourPushCounter =0;
int buttonFivePushCounter =0;
int buttonSixPushCounter =0;
int buttonSevenPushCounter =0;
int buttonEightPushCounter =0;



void setup() {
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(buttonOne, OUTPUT);
}

void loop() {

digitalWrite(buttonOne,HIGH);
digitalWrite(buttonTwo,HIGH);
digitalWrite(buttonThree,HIGH);
digitalWrite(buttonFour,HIGH);
digitalWrite(buttonFive,HIGH);
digitalWrite(buttonSix,HIGH);
digitalWrite(buttonSeven,HIGH);
digitalWrite(buttonEight,HIGH);


ButtonOneState = digitalRead(buttonOne);
ButtonTwoState = digitalRead(buttonTwo);
ButtonThreeState = digitalRead(buttonThree);
ButtonFourState = digitalRead(buttonFour);
ButtonFiveState = digitalRead(buttonFive);
ButtonSixState = digitalRead(buttonSix);
ButtonSevenState = digitalRead(buttonSeven);
ButtonEightState = digitalRead(buttonEight);

      



if(ButtonOneState != lastButtonOneState){

  if(ButtonOneState == LOW){
     buttonOnePushCounter++;
     Keyboard.press(ctrlKey);
     Keyboard.press('n');
     delay(100);
     Keyboard.releaseAll();
    // wait for new window to open:
     delay(1000);
  }
}else if(ButtonTwoState != lastButtonTwoState) {
  if(ButtonTwoState == LOW){
    buttonTwoPushCounter++;
     Keyboard.press(KEY_LEFT_ALT);
     Keyboard.press(KEY_TAB);
     delay(100);
     Keyboard.releaseAll();
    // wait for new window to open
     delay(1000);
  }
}else if(ButtonThreeState != lastButtonThreeState) {
  if(ButtonThreeState == LOW){
    buttonThreePushCounter++;
     Keyboard.press(ctrlKey);
     Keyboard.press(KEY_LEFT_ALT);
       delay(100);
     Keyboard.press('t');
     Keyboard.release('t');
     Keyboard.releaseAll();
    // wait for new window to open:
     delay(1000);
  }
}else if(ButtonFourState != lastButtonFourState) {
  if(ButtonFourState == LOW){
    buttonFourPushCounter++;
      Keyboard.print("You pressed the Fourth button");
      delay(50);
  }
}else if(ButtonFiveState != lastButtonFiveState) {
  if(ButtonFiveState == LOW){
    buttonFivePushCounter++;
      Keyboard.print("You pressed the Fith button");
      delay(50);
  }
}else if(ButtonSixState != lastButtonSixState) {
  if(ButtonSixState == LOW){
    buttonSixPushCounter++;
      Keyboard.print("You pressed the Six button");
      delay(50);
  }
}else if(ButtonSevenState != lastButtonSevenState) {
  if(ButtonSevenState == LOW){
    buttonSevenPushCounter++;
      Keyboard.print("You pressed the Seventh button");
      delay(50);
  }
}else if(ButtonEightState != lastButtonEightState) {
  if(ButtonEightState == LOW){
    buttonEightPushCounter++;
      Keyboard.print("You pressed the Eight button");
      delay(50);
  }
}




lastButtonOneState = ButtonOneState;
lastButtonTwoState = ButtonTwoState;
lastButtonThreeState = ButtonThreeState;
lastButtonFourState = ButtonFourState;
lastButtonFiveState = ButtonFiveState;
lastButtonSixState = ButtonSixState;
lastButtonSevenState = ButtonSevenState;
lastButtonEightState = ButtonEightState;
}
