#include <stdio.h>

int main(void)
{
	int dan = 1;
	
	while(dan <= 8) {
		dan++;
		
		if(dan % 2 != 0) {
			continue;
		}
		
		int i = 1;
		
		while(i <= dan) {
			printf("%d X %d = %d \n", dan, i, dan*i);
			i++;
		}
		
		printf("\n");
	}
}
