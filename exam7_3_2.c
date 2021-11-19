#include <stdio.h>

int main(void)
{
	int num = 0;
	int total = 0;

	do {
		
		if(num % 2 == 0) {
			total += num;
		}
		
		num++;
	} while(num <= 100);
	
	printf("µ¡¼ÀÀÇ °á°ú : %d", total);
	
	return 0;
}
