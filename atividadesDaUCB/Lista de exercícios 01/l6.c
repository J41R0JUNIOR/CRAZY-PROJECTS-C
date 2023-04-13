#include <stdio.h>

int main(void) {

  int n = 1000;

  for(int i = 1; i <= n; ++i){
    if(i % 3 == 0 || i % 5 == 0)
      printf("\n%d", i);
  }

  return 0;
}