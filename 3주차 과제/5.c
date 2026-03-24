#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int H, M;

    scanf("%d %d", &H, &M);

    if (M >= 45) {
        M = M - 45;
    }
    else {
        M = M + 15;
        H = H - 1;

        if (H < 0) {
            H = 23;
        }
    }

    printf("%d %d", H, M);

    return 0;
}