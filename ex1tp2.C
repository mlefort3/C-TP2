#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[] = {'S', 'a', 'l', 'u', 't', '\0'};
    char s2[] = "Salut";
    char *s3; s3="Salut";
    char *s4="Salut";
    char s5[20];
    strcpy(s5,"Salut");
    printf("%s\n",s5);
    
    s1[0]='M';
    s2[0]='M';
    s3[0]='M'; //normalement erreur car les s sont des constantes
    s4[0]='M';
    s5[0]='M';
    
    return 1;
}
