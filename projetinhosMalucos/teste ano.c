#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
   
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int ano,mes,dia;
    int anoat = tm.tm_year + 1900, mesat =  tm.tm_mon + 1, diaat = tm.tm_mday;

    int anotot=0;



//data
    printf("data: %02d/%02d/%02d\n", tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);

    printf("Data (d/m/a): ");
    scanf("%d/%d/%d", &dia,&mes,&ano);

    for(ano; ano < anoat; ano++,anotot++){
        printf("%d\n",ano);

        //for(){}

    }
    printf("%d",anotot);

    return 0 ;
}