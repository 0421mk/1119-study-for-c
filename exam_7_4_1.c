#include <stdio.h>

int main(void) {
	int total = 0;
	int i, num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	for(i = num1; i <= num2 ; i++) {
		total += i;
	}
	
	printf("n���� m������ ������� : %d \n", total);
	
	return 0;
}
