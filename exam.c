#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[], char* env[]){

	int s,i,j,sum;
	//int** ptr_arr = (int**)malloc(sizeof(int*)*4);

	//ptr_arr[0] = (int*)malloc(sizeof(int));
	//ptr_arr[1] = (int*)malloc(sizeof(int));
	//ptr_arr[2] = (int*)malloc(sizeof(int));
	//ptr_arr[3] = (int*)malloc(sizeof(int));

	//*(ptr_arr[0]) = 1;
	//*(ptr_arr[1]) = 2;
	//*(ptr_arr[2]) = 3;
	//*(ptr_arr[3]) = 4;

	//for(i=0;i<4;i++){
	//printf("%d\n",ptr_arr[i][0]);
	//}

	printf("숫자를 입력하세요");
	scanf("%d",&j);

	int** ptr_arr = (int**)malloc(sizeof(int*)*j);

	for(i=0;i<j;i++){
		ptr_arr[i]=(int*)malloc(sizeof(int*)*j);
		sum = 0;
		for(s=0;s<j;s++){
			printf("값을 입력해주세요");	
			scanf("%d", &(ptr_arr[i][s]));
			sum += *(*(ptr_arr+i)+s);
		}
		printf("%d\n",sum);
	}

	return 0;
}
