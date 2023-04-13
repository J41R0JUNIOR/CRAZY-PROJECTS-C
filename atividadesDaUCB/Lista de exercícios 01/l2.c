#include <stdio.h>
#include <math.h>

int main(void) {

  float x1 = 15.7, x2 = 3.9, y1 = 35.3, y2 = 42.8;
  float dist;

  dist = sqrt( pow((x2 - x1),2) + pow((y2 - y1),2) );

  printf("Distancia: %.4f", dist);
  return 0;
}