#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX  5

int main(void){

    //malloc

    double *p = (double *) malloc(TAM_MAX * sizeof(double));

     printf("\\\\\\Digitar os valores///\n");

    for(int i = 0; i < TAM_MAX; ++i){
        scanf("%lf", &p[i]);
    }

    printf("\\\\\\Valores dentro do ponteiros///\n");
    for(int i = 0; i < TAM_MAX; ++i){
        printf("%d\n", &p[i]);
        printf("%lf \n\n", p[i]);
    }
    

    //realloc
    double *q;

    q = (double *) realloc(p, 2 * sizeof(double));

    for(int i = 5; i < TAM_MAX + 2; ++i){
        scanf("%lf", &q[i]);
    }

    printf("\\\\\\Valores dentro do ponteiros///\n");
    for(int i = 0; i < TAM_MAX + 2; ++i){
        printf("%d\n", &q[i]);
        printf("%lf \n\n", q[i]);
    }

    free(p);

    return 0;
}