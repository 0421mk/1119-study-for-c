#include <stdio.h>

int main(void) {
	int opt;
	double num1, num2;
	double result;
	
	while(1) {
		printf("1.µ¡¼À, 2.»¬¼À, 3.°ö¼À, 4.³ª´°¼À \n");
		printf("¼±ÅÃ? ");
		scanf("%d", &opt);
	
		if(opt >= 1 && opt <= 4) {
			break;
		}
		
		printf("´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä. \n");
	}
	
	printf("µÎ°³ÀÇ ½Ç¼ö ÀÔ·Â: ");
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
