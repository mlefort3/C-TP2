#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int first_occurrence(char* chaine, char element) {
    for (int i=0 ; i<strlen(chaine)+1 ;i++) {
        if (chaine[i]==element) {
            return i;
        }
    }
    return 0;
}

int last_occurrence(char* chaine, char element) {
    int fin = first_occurrence(chaine, '\0');
    int i = fin;
    while (i>0 && chaine[i]!=element) {
        i--;
    }
    return i;
}

void fermeture(char* chaine) {
    for (int i=0 ; i<strlen(chaine)-3 ;i++) {
        if (chaine[i]=='e' && chaine[i+1]=='x' && chaine[i+2]=='i' && chaine[i+3]=='t') {
            exit(0);
        }
    }
}

int main() {
    char chaine[100];
    char caractere='\0';
    printf("\nRentrez une phrase quelconque : \n");
    fgets(chaine,sizeof(chaine),stdin);
    fermeture(chaine);
    printf("%d\n",first_occurrence(chaine,'\0'));
    printf("\nRentrez un caractère quelconque : \n");
    scanf("%c",&caractere);
    if (first_occurrence(chaine,caractere)>0) {
        printf("Le caractère %c apparaît pour la première fois à la position %d et pour la dernière fois en position %d\n",caractere,first_occurrence(chaine,caractere)+1,last_occurrence(chaine,caractere)+1);
    }
    else {
        printf("Le caractère %c n'apparaît pas dans la chaîne de caractère rentrée.",caractere);
    }
    return 1;
}