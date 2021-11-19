#include <stdio.h>

int main(void) {
	int temp = 0;
	
	while(temp < 5) {
		int temp2 = 0;
		
		while(temp2 < temp) {
			printf("o");
			temp2++;
		}
		printf("*");
		
		printf("\n");
		temp++;
	}
	return 0;
}
