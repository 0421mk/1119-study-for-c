#include <stdio.h>

int main(void) {
	int score1, score2, score3;
	double avg;
	
	printf("����: ");
	scanf("%d", &score1);
	
	printf("����: ");
	scanf("%d", &score2);
	
	printf("����: ");
	scanf("%d", &score3);
	
	avg = ((double)score1 + score2 + score3)/3;
	
	if(avg >= 90) {
		printf("���� : A");
	} else if(avg >= 80) {
		printf("���� : B");
	} else if(avg >= 70) {
		printf("���� : C");
	} else if(avg >= 60) {
		printf("���� : D");
	} else {
		printf("���� : F");
	}
	
	return 0;
}
