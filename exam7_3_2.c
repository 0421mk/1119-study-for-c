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
	
	printf("������ ��� : %d", total);
	
	return 0;
}
