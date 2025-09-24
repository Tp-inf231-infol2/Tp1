#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Entrez la taille du vecteur :\n");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice :\n");
    scanf("%d", &m);

    int V[n], M[n][m], R[m];

    printf("Entrez les elements du vecteur :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }

    printf("Entrez les elements de la matrice :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    for (j = 0; j < m; j++) {
        R[j] = 0;
        for (i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    printf("Le vecteur resultat est : ");
    for (j = 0; j < m; j++) {
        printf("%d ", R[j]);
    }
    printf("\n");

    return 0;
}