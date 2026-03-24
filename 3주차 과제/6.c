#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int A, B, C;

    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    B = B + C;

    A = A + (B / 60);
    B = B % 60;

    A = A % 24;

    printf("%d %d", A, B);

    return 0;
}