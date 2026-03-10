#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int N;
    int score;
    int max = 0;
    int sum = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &score);
        sum += score;

        if (score > max) {
            max = score;
        }
    }

    printf("%lf", (double)sum * 100 / (max * N));

    return 0;
}