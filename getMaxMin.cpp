#include <stdio.h>

int Factorial(int n) {
	if(n == 1) {
		printf("n: %d \n", n);
		return 1; // ������ ���� 
	} else {
		printf("n: %d \n", n);
		return n * Factorial(n-1); // ������ ���� 
	}
}

int main(void)
{	
	printf("%d", Factorial(10));
	
	return 0;
}
