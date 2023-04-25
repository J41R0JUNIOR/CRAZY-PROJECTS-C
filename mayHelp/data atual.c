#include <stdio.h>
#include <time.h>

int main(){
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);

//data
  printf("data: %02d/%02d/%02d\n", tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);

//hora
  printf("hora: %02d:%02d:%02d",tm.tm_hour, tm.tm_min, tm.tm_sec);

  printf("testando...");

  return 0;
}