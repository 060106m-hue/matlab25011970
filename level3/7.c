#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int T, A, B;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A + B);
    }

    return 0;
}