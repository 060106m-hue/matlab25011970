#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int N;
    int num;
    int min, max;

    scanf("%d", &N);

    scanf("%d", &num);
    min = max = num;

    for (int i = 1; i < N; i++) {
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }

    printf("%d %d", min, max);

    return 0;
}