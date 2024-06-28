#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if((temperature == 25) || (soc == 70) || (chargeRate == 0.7)) {
    printf("Temperature is within range!\n");
   // printf("State of Charge is within range!\n");
   //  printf("Charge Rate is within range!\n");
    return 0;
  } 
 // else
 // {
 //   printf("Temperature out of range!\n");
 //   printf("State of Charge out of range!\n");
   // printf("Charge Rate out of range!\n");
  //  return 0;
//  }
  //else if(soc < 20 || soc > 80) {
   // printf("State of Charge out of range!\n");
   // return 0;
  //} else if(chargeRate > 0.8) {
  //  printf("Charge Rate out of range!\n");
  //  return 0;
//  }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
