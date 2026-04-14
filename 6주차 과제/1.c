#include <stdio.h>
#pragma warning(disable:4996)

int main() {
    int N;
    int arr[100];
    int v;
    int count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < N; i++) {
        if (arr[i] == v) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}