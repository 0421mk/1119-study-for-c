#include <stdio.h>

int main(void) {
	int opt;
	double num1, num2;
	double result;
	
	while(1) {
		printf("1.����, 2.����, 3.����, 4.������ \n");
		printf("����? ");
		scanf("%d", &opt);
	
		if(opt >= 1 && opt <= 4) {
			break;
		}
		
		printf("�ٽ� �Է����ּ���. \n");
	}
	
	printf("�ΰ��� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);
	
	if(opt == 1) {
		result = num1 + num2;
	} else if(opt==2) {
		result = num1 - num2;
	} else if(opt == 3) {
		result = num1 * num2;
	} else if(opt == 4) {
		result = num1/num2;
	}
	
	printf("result : %lf", result);
	
	return 0;
}
