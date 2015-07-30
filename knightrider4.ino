/* Knight Rider 4
 * --------------
 *
 * This example concentrates on making the visuals fluid.
 *
 * It also does not use a for() loop!
 *
 * (cleft) 2005 K3, Malmo University
 * @author: David Cuartielles
 * @hardware: David Cuartielles, Aaron Hallborg
 * modified by David Reeves 2015
 */

int pinArray[] = {2, 3, 4, 5, 6, 7};
int count = 0;
int timer = 30;
int moveDirection = 1;

void setup(){
  for (count=0;count<6;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
  count = 0;

}

void loop() {
 
  if (count > 6 || count < 0) {
    moveDirection = moveDirection * -1;
    
  } 
  else {

  
    digitalWrite(pinArray[count], HIGH);
    delay(timer);
    digitalWrite(pinArray[count + moveDirection], HIGH);
    delay(timer);
    digitalWrite(pinArray[count], LOW);
    delay(timer*2);
  }
  
    count = count + moveDirection;
}
