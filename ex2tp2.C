#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char min2maj(char c) {
    return c - 32;
}

char maj2min(char c) {
    return c + 32;
}

int main() {
    char chaine[100];
    printf("\nRentrez une phrase quelconque : \n");
    fgets(chaine,sizeof(chaine),stdin);
    char copie[100];
    strcpy(copie,chaine);
    for (int i=0 ; i<=98 ;i++) {
        int j = copie[i];
        if (j>=97 && j<=122) {
            copie[i] = min2maj(copie[i]);
        }
        if (j>=65 && j<=90) {
            copie[i] = maj2min(copie[i]);
        }
    }
    printf("%s \n",copie);
    return 1;
}