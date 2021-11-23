#include <stdio.h>

int main(void)
{
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			int az = i*10 + j*1;
			int za = j*10 + i*1;
			
			if(az+za == 99) {
				printf("A: %d, Z: %d \n", i, j);
			}
		}
	}
}
