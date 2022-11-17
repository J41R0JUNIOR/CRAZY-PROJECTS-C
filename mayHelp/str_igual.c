#include <stdio.h>

int main(void){

    _Bool stringsiguais(char s1[], char s2[]);

    if(stringsiguais("casa", "casa")){
        printf("Sao Iguais");
    }else{
        printf("Nao Sao Iguais");
    }

    return 0;
}
_Bool stringsiguais(char s1[], char s2[]){

    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        ++i;
    }
    if(s1[i] == '\0' && s2[i] == '\0'){
        return 1;
    }else{
        return 0;
    }

}