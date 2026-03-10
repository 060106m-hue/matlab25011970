#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int A, B;
	scanf("%d %d", &A, &B); //A와 B값 입력
	int C = A * B; //C를 A x B값의 변수로 지정
	printf("%d", C);//A x B 값 출력
	return 0;
}