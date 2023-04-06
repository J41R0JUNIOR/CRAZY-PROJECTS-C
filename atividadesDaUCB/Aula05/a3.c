#include <stdio.h>
/*
• De graus Celsius(C) para graus Fahrenheit(F): F = (9 ∗ C/5) + 32)

• De graus Fahrenheit (F) para graus Celsius (C): C = (F − 32) ∗ 5/9

• De graus Celsius (C) para graus Kelvin (K): K = C + 273.15

• De graus Kelvin (K) para graus Celsius (C): C = K − 273.15

• De graus Celsius (C) para graus Réaumur (Re): Re = C ∗ 4/5

• De graus Réaumur (Re) para graus Celsius (C): C = Re ∗ 5/4

• De graus Kelvin (K) para graus Rankine (R): R = K ∗ 1.8

• De graus Rankine (R) para graus Kelvin (K): K = R/1.8 
*/

int main (void){

    float x = 30, resultado;
    char escolha1, escolha2;

    float c_para_f (float x);
    float f_para_c (float x);
    float c_para_k (float x);
    float k_para_c (float x);
    float c_para_re (float x);
    float re_para_c (float x);
    float k_para_r (float x);
    float r_para_k (float x);

    printf("De: \n");
    scanf("%c", &escolha1);
    fflush(stdin);
    printf("para \n");
    scanf("%c", &escolha2);
    fflush(stdin);

    if(escolha1 == 'c' && escolha2 == 'f'){
        printf("%f", c_para_f(x)); 
    }else if(escolha1 == 'f' && escolha2 == 'c'){
        printf("%f", f_para_c (x)); 
    }else if(escolha1 == 'c' && escolha2 == 'k'){
        printf("%f", c_para_k (x)); 
    }else if(escolha1 == 'k' && escolha2 == 'c'){
        printf("%f", k_para_c (x)); 
    }else if(escolha1 == 'c' && escolha2 == 're'){
        printf("%f", c_para_re (x)); 
    }else if(escolha1 == 're' && escolha2 == 'c'){
        printf("%f", re_para_c (x)); 
    }else if(escolha1 == 'k' && escolha2 == 'r'){
        printf("%f", k_para_r (x)); 
    }else if(escolha1 == 'r' && escolha2 == 'k'){
        printf("%f", r_para_k (x)); 
    }

    return 0;
}

float c_para_f (float x){
    return ((9 * x/5) + 32);
}
float f_para_c (float x){
    return ((x - 32) * 5/9);
}
float c_para_k (float x){
    return (x + 273.15);
}
float k_para_c (float x){
    return (x - 273.15);
}
float c_para_re (float x){
    return (x * 4/5);
}
float re_para_c (float x){
    return (x * 5/4);
}
float k_para_r (float x){
    return (x * 1.8);
}
float r_para_k (float x){
    return (x/1.8);
}