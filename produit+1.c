#include <stdio.h>

int main() {
    int a, b, i, j, produit = 0;

    printf("Entrez le premier nombre : ");
    scanf("%d", &a);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &b);
    for (i = 0; i < a; i++) {       
        for (j = 0; j < b; j++) {   
            produit = produit + 1;
        }
    }

    printf("Le produit de %d et %d est : %d\n", a, b, produit);

    return 0;
}