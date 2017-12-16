//minarray.c: Computing the minumum number in an array of 10 ints.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int min_array(int *arr)
{
	int i,min=*arr;
	printf("%d",min);
	char ch=getchar();
	for(i=0; i<SIZE; i++)
		if(*(arr+i)<min)
			min=*(arr+i);
	return min;
}
int main(void)
{
	int num_to_compare[SIZE]={10,9,19,7,6,1,4,3,2,90};

	printf("The min of the 10 integers is: %d\n", min_array(num_to_compare));
	return 0;

}