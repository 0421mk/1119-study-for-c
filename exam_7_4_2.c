#include <stdio.h>

int main(void) {
	int result = 1;
	int i, n;
	scanf("%d", &n);
	
	for(i = 1; i <= n ; i++) {
		result *= i;
	}
	
	printf("Factorial : %d \n", result);
	
	return 0;
}
