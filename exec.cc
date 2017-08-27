#include <stdio.h>
#include <stdlib.h>
void Swap(void *i, void *j, int size);

int main(void)
{
	int int_val1 = 10;
	int int_val2 = 20;
	double dou_val1 = 3.5;
	double dou_val2 = 10.5;

	Swap(&int_val1, &int_val2,sizeof(int_val1));
	Swap(&dou_val1, &dou_val2,sizeof(dou_val1));

	printf("%d, %d, %lf, %lf\n", int_val1, int_val2, dou_val1, dou_val2);
	
	return 0;
}

void Swap(void *i, void *j, int size){
	
	int temp1;
	double temp2;

	if(size==4){

		temp1 = (*(int*)i);
		(*(int*)i) = (*(int*)j);
		(*(int*)j) = temp1;
	};

	if(size==8){

		temp2 = (*(double*)i);
		(*(double*)i) = (*(double*)j);
		(*(double*)j) = temp2;
	};

}
