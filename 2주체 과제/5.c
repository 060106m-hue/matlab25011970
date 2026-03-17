#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    int b1 = B % 10;        // 일의 자리
    int b2 = (B / 10) % 10; // 십의 자리
    int b3 = B / 100;       // 백의 자리

    printf("%d\n", A * b1);
    printf("%d\n", A * b2);
    printf("%d\n", A * b3);
    printf("%d\n", A * B);

    return 0;
}