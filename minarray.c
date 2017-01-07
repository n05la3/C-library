//minarray.c: Computing the minumum number in an array of 10 ints.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{
	int num_to_compare[SIZE]={10,9,8,7,6,5,4,3,2,1},i,min=num_to_compare[0];


	for (i = 0; i < SIZE-1; i++)
		if(num_to_compare[i]<num_to_compare[i+1])
			min=num_to_compare[i];
		else min=num_to_compare[i+1];

	printf("The min of the 10 integers is: %d\n", min);
	return 0;

}