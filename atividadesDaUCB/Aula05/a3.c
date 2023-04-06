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

    float x, resultado;
    int escolha;

    float c_para_f (float x);
    float f_para_c (float x);
    float c_para_k (float x);
    float k_para_c (float x);
    float c_para_re (float x);
    float re_para_c (float x);
    float k_para_r (float x);
    float r_para_k (float x);

    printf("Digite o valor: ");
    scanf("%f", &x);

    printf("1- De graus Celsius(C) para graus Fahrenheit(F)\n2- De graus Fahrenheit (F) para graus Celsius (C)\n3- De graus Celsius (C) para graus Kelvin (K)\n4- De graus Kelvin (K) para graus Celsius (C)\n5- De graus Celsius (C) para graus Réaumur (Re)\n6- De graus Réaumur (Re) para graus Celsius (C)\n7- De graus Kelvin (K) para graus Rankine (R)\n8- De graus Rankine (R) para graus Kelvin (K)\n");

    scanf("%d", &escolha);
    
    if(escolha == 1){
        printf("%f", c_para_f(x)); 
    }else if(escolha == 2){
        printf("%f", f_para_c (x)); 
    }else if(escolha == 3){
        printf("%f", c_para_k (x)); 
    }else if(escolha == 4){
        printf("%f", k_para_c (x)); 
    }else if(escolha == 5){
        printf("%f", c_para_re (x)); 
    }else if(escolha == 6){
        printf("%f", re_para_c (x)); 
    }else if(escolha == 7){
        printf("%f", k_para_r (x)); 
    }else if(escolha == 8){
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