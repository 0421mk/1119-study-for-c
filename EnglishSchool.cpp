#include <stdio.h>

// (1) ���� ��ȯ �Լ� 
// (2) ũ�⸦ ���ϴ� �Լ� 
int getAbs(int x);
int numComp(int x, int y);

int main(void)
{	
	int num1, num2;
	int result;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2); 
	
	result = numComp(num1, num2);
	printf("������ �� ū �� : %d \n", result);
	
	return 0;
}

int getAbs(int x) {
	return x > 0 ? x : x*-1;
}

int numComp(int x, int y) {
	return getAbs(x) > getAbs(y) ? x : y;
}
