#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int * temp;
		
	temp = arr + 2;

	printf("%d", *temp);
	
	return 0;
}
