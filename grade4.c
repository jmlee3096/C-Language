#include <stdio.h>

#define STUDENTS 5

int main(void){
	int grade[STUDENTS];
	int sum=0;
	int i,average;

	printf("성적을 입력해주세요");

	for(i=0;i<STUDENTS;i++){
		scanf("%d",&grade[i]);
	}

	for(i=0;i<STUDENTS;i++){
		sum+=grade[i];
	}
	
	average=sum/STUDENTS;

	printf("성적평균:%d\n",average);

	return 0;
}

