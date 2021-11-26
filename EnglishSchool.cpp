#include <stdio.h>

// (1) 절댓값 반환 함수 
// (2) 크기를 비교하는 함수 
int getAbs(int x);
int numComp(int x, int y);

int main(void)
{	
	int num1, num2;
	int result;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2); 
	
	result = numComp(num1, num2);
	printf("절댓값이 더 큰 수 : %d \n", result);
	
	return 0;
}

int getAbs(int x) {
	return x > 0 ? x : x*-1;
}

int numComp(int x, int y) {
	return getAbs(x) > getAbs(y) ? x : y;
}
