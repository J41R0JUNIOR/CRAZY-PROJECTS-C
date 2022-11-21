#include <stdio.h>
int main(){
    int i=0, j=0;
    printf("Digite o primeiro valor: ");
    scanf("%d",&i);
    printf("Digite o segundo valor: ");
    scanf("%d",&j);
    
    for ( i=i ; i > 0; i+=j ){
        printf("%d\n",i);
        system("pause");
    }
    return 0 ;
}
 