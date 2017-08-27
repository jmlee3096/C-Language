#include <stdio.h>
#include <stdlib.h>
void swap(void*, void*);

int main(void){
	int x,y;
	
	printf("x를 입력하세요");
	scanf("%d", &x);

	printf("y를 입력하세요");
	scanf("%d", &y);
	
	printf("swap 전\nx : %d, y: %d\n", x, y);
	swap(&x,&y);

	printf("swap 후\nx : %d, y: %d\n", x, y);

	return 0;
}

void swap(void* a, void* b){
	int temp;
	
	temp = *(int*)a;
	*(int*)a = *(int*)b;
	*(int*)b = temp;
}
