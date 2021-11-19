#include <stdio.h>

int main(void) {
	int total = 0;
	int i, num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	for(i = num1; i <= num2 ; i++) {
		total += i;
	}
	
	printf("nºÎÅÍ m±îÁöÀÇ µ¡¼À°á°ú : %d \n", total);
	
	return 0;
}
