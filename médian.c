#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Quelle est la taille du tableau ?\n");
    scanf("%d", &n);

    int T[n], copie[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
        copie[i] = T[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (copie[j] > copie[j + 1]) {
                temp = copie[j];
                copie[j] = copie[j + 1];
                copie[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 1) {
        printf("La mediane du tableau est : %d\n", copie[n / 2]);
    } else {
        float mediane = (copie[(n / 2) - 1] + copie[n / 2]) / 2.0;
        printf("La mediane du tableau est : %.1f\n", mediane);
    }

    return 0;
}