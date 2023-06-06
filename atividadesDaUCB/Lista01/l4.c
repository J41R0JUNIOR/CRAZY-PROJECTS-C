#include <stdio.h>

int main(void) {
  
  float x = -3, y = 5;
  
  if(x > 0 && y > 0){
    printf("Posicao Q1");
  }else if(x < 0 && y < 0){
    printf("Posicao Q3");
  }else if(x < 0 && y > 0){
    printf("Posicao Q2");
  }else if(x > 0 && y < 0){
    printf("Posicao Q4");
  }else{
    printf("Ponto de Origem");
  }
  return 0;
}