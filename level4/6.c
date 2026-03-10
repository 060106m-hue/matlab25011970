#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int N, M;
    int basket[101];

    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++) {
        basket[i] = i;
    }

    for (int a = 0; a < M; a++) {
        int i, j, temp;
        scanf("%d %d", &i, &j);

        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}