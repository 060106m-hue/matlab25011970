#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int check[42] = { 0 };
    int num;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        check[num % 42] = 1;
    }

    for (int i = 0; i < 42; i++) {
        if (check[i] == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}