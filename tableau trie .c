#include <stdio.h>

int main() {
    int n, i;
    int croissant = 1, decroissant = 1;

    printf("Quelle est la taille du tableau ?\n");
    scanf("%d", &n);

    int T[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    for (i = 0; i < n - 1; i++) {
        if (T[i] > T[i + 1]) {
            croissant = 0;
        }
        if (T[i] < T[i + 1]) {
            decroissant = 0;
        }
    }

    if (croissant == 1) {
        printf("Le tableau est trie par ordre croissant.\n");
    } else if (decroissant == 1) {
        printf("Le tableau est trie par ordre decroissant.\n");
    } else {
        printf("Le tableau n'est pas trie.\n");
    }

    return 0;
}