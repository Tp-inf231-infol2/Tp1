#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Quelle est la taille du tableau ?\n");
    scanf("%d", &n);

    int T[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = T[i];
        T[i] = T[n - 1 - i];
        T[n - 1 - i] = temp;
    }

    printf("Le tableau inverse est : ");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}