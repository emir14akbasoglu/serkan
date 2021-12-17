#include"devirdaim.h"
Devirdaim devirdaim(2,A2);
void setup() {
Serial.begin(9600);
}

void loop(){
  devirdaim.check();
}
