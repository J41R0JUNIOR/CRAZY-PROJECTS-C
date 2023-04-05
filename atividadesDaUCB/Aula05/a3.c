#include <stdio.h>

int main (void){

    float x = 30, resultado;
    char escolha1, escolha2;

    float c_para_f (float x);

    scanf("%c", &escolha1);
    fflush(stdin);
    printf("para ");
    scanf("%c", &escolha2);
    fflush(stdin);

    if(escolha1 == 'c' && escolha2 == 'f'){
        printf("%f", c_para_f(x)); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }else if(escolha1 == 'c' && escolha2 == 'f'){
        printf(""); 
    }

    return 0;
}

float c_para_f (float x){
    return ((9 * x/5) + 32);
}
float f_para_c (float x){}
float c_para_k (float x){}
float k_para_c (float x){}
float c_para_re (float x){}
float re_para_c (float x){}
float k_para_r (float x){}
float r_para_k (float x){}