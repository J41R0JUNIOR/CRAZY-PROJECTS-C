#include <stdio.h>
#include <conio.h>
int main(void)
{
  int i;
  
  for(i = 1; i < 10; i++)
  {
    if (i % 2 == 0) //se i for par não faz nada e pula para a próxima iteração
    {
      continue;
    }
    else // senão imprime os ímpares
    {
      printf("Numero: %d \n",i );
    }
    
    printf("Numero impar!\n\n");
  
  }
  
  printf("Final do programa!\n\n");
  getch();
  return 0;
}