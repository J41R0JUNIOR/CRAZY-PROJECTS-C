#include<stdio.h>

int main(void){
    float r=0,a=0, pi=3.14;

    printf("Type the circle ray: ");
    scanf("%f",&r);
    a = 2 * pi * (r*r); 
    
    printf("The circle area is:%.2f ",a);

    return 0;
}