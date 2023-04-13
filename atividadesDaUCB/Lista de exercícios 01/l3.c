#include <stdio.h>
#include <math.h>
#define PI 3.141592653589

int main(void) {
  
  float volume;
  double r = 3.14;
  volume = (4/3.0) * PI * pow(r, 3);

  printf("%.12lf", volume);
  
  return 0;
}