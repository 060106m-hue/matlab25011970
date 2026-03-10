#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int N, M;
    int basket[101] = { 0 };

    scanf("%d %d", &N, &M);

    for (int a = 0; a < M; a++) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);

        for (int x = i; x <= j; x++) {
            basket[x] = k;
        }
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}