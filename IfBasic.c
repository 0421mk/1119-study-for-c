#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	
	if(num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
		
	if(num < -1)
		printf("�Է� ���� -1���� �۴�. \n");
	
	if(num == 0)
		printf("�Է� ���� 0�� ����. \n");
	
	return 0;
}
