#include <stdio.h>

int main(void)
{
	int num;
	int cnt = 0;
	int total = 0;
	while(cnt < 5) {
		scanf("%d", &num);
		
		while(num < 1) {
			printf("�ٽ� �Է����ּ���.\n");
			scanf("%d", &num);
		}
		
		cnt++;
		total += num;
	}
	
	printf("total : %d", total);
	
	return 0;
}
