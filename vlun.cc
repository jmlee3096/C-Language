#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[], char* env[])
{
	char passwd[20] = "apple";
	int flag = 0;
	char user_input[20];

	memset(user_input, 0x00, sizeof(user_input));
	gets(user_input);

	if(0 == strcmp(passwd, user_input)){
		flag = 1;
	}

	if(flag){
		fputs("authentication success! \n", stdout);
	}else{
		fputs("authentication failed.. \n", stdout);
	}

	return 0;
}
