#include <stdio.h>

int main(void) {
  
  int n = 66, i = 1;

  while(i <= n){
    if(n % i == 0){
      printf("\n%d", i);
    }
    i++;
  }
  
  return 0;
}