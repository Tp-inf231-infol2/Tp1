
#include <stdio.h>

int main() {
    int i, j, n, m;

    printf("Entrez le nombre de lignes de vos matrices : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de vos matrices : ");
    scanf("%d", &m);

    int A[n][m], B[n][m], C[n][m];
    
    printf("Remplissage de la matrice A (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Remplissage de la matrice B (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("B[%d][%d] = ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("La somme des matrices A et B est :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
