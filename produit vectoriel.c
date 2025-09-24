#include <stdio.h>

int main() {
    int i;
    int A[3], B[3], C[3];

    printf("Entrez les 3 composantes du vecteur A :\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    printf("Entrez les 3 composantes du vecteur B :\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
    }

    C[0] = A[1]*B[2] - A[2]*B[1];
    C[1] = A[2]*B[0] - A[0]*B[2];
    C[2] = A[0]*B[1] - A[1]*B[0];

    printf("Le produit vectoriel A x B est : (%d, %d, %d)\n", C[0], C[1], C[2]);

    return 0;
}