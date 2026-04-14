#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int num;
    int max = 0;
    int position = 0;

    for (int i = 1; i <= 9; i++) {
        scanf("%d", &num);

        if (num > max) {
            max = num;
            position = i;
        }
    }

    printf("%d\n", max);
    printf("%d", position);

    return 0;
}