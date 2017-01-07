//minarray.c: Computing the minumum number in an array of 10 ints.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int min_array(int *arr)
{
	int i,min=*arr;
	for(i=0; i<SIZE-1; i++)
		if(*(arr+i)<*((arr+i)+1))
			min=*arr+i;
		else min=*((arr+i)+1);
	return min;
}
int main(void)
{
	int num_to_compare[SIZE]={10,9,8,7,6,5,4,3,2,1},i,min=num_to_compare[0];

	printf("The min of the 10 integers is: %d\n", min_array(num_to_compare));
	return 0;

}