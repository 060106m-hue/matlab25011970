#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	double C = (double)A / B;   // ½Ç¼ö ³ª´°¼À
	printf("%.12f", C);

	return 0;
}