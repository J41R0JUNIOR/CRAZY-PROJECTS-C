#include <stdio.h>

void copiarString(char *copiarDaqui, char *colarAqui){

    while(*copiarDaqui != '\0'){
        *colarAqui = *copiarDaqui;  
        ++copiarDaqui;
        ++colarAqui;
    }
    *colarAqui = '\0';
}

int main (void){

    void copiarString(char *copiarDaqui, char *colarAqui);

    char string1[] = "Pao com mortadela";
    char string2[20];

    copiarString(string1, string2);
    printf("%s\n",string2);

    return 0;
}