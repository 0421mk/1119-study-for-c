#include <stdio.h>

int main(void) {
	int num1, num2, result;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2) {
		result = num1 - num2;
	} else {
		result = num2 - num1;
	}

	printf("%d", result);
	
	return 0;
}
