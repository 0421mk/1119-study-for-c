#include <stdio.h>

void fibo(int n);

int main(void)
{	
	fibo(5);
	
	return 0;
}

void fibo(int n) {
	
	int fb1 = 0, fb2 = 1, fb3, i;
	
	printf("%d %d ", fb1, fb2);
	
	for(i = 0; i < n-3; i++) {
		if(i == 0) {
			fb3 = fb1 + fb2;
			printf("%d ", fb3);
		}	
		fb1 = fb2;
		fb2 = fb3;
		fb3 = fb1 + fb2;
		printf("%d ", fb3);
	}
}
