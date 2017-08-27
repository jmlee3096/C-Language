#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){
	int i,j,length;
	char* ptr_arr = (char*)malloc(sizeof(char)*10);
	
	printf("문자열을 입력하세요:");
	
	scanf("%s",ptr_arr);

	for(i=0;i<10;i++){
		if(ptr_arr[i] == " ";){
			length = i;
		} 
	}
	
	for(i=0;i<length;i++)
		if(ptr_arr[i]) != ptr_arr[length]){
			printf("회문이아닙니다.\n");
			break;
			}
		else{
			length--;
			}
		printf("회문입니다.\n");

	}
	

	for(i

}
