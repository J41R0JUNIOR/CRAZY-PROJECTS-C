#include <stdio.h>
int main (void){
    int a = 3
    ;
    int b = 2;
    printf("%d %d\n",a,b);
    a=a^b;
    printf("1- %d %d\n",a,b);
    b=b^a;
    printf("2- %d %d\n",a,b);
    a=a^b;
    printf("3- %d %d\n",a,b);
    return 0;
}