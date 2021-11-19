#include <stdio.h>

int main(void) {
	int score1, score2, score3;
	double avg;
	
	printf("국어: ");
	scanf("%d", &score1);
	
	printf("영어: ");
	scanf("%d", &score2);
	
	printf("수학: ");
	scanf("%d", &score3);
	
	avg = ((double)score1 + score2 + score3)/3;
	
	if(avg >= 90) {
		printf("학점 : A");
	} else if(avg >= 80) {
		printf("학점 : B");
	} else if(avg >= 70) {
		printf("학점 : C");
	} else if(avg >= 60) {
		printf("학점 : D");
	} else {
		printf("학점 : F");
	}
	
	return 0;
}
