// color animations for wireless diagnosis

void success(){ // all green - with delay
 for (int c=0; c<buttonamount; c++){
  for(int a=0; a<4; a++) {
    strip.setPixelColor(a+(4*c),0,255,0,0);         //  Set pixel's color (in RAM)
    strip.show();
   }
 }
 delay(1000);
  for (int c=0; c<buttonamount; c++){
  for(int a=0; a<4; a++) {
    strip.setPixelColor(a+(4*c),0,0,0,0);         //  Set pixel's color (in RAM)
    strip.show();
   }
 }
 connected_update = false;
}
