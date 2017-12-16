//arrayaddress.c: learning how the addresses of array elements in c are related.
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int array_to_test[5]={1,2,3,4,5};
	printf("Address 1: %p \n", array_to_test);
	printf("Address 4: %p \n", &array_to_test[4]);
	printf("The difference between addresses of the last and first elements is: %d which is the index", &array_to_test[4]-array_to_test);
	exit(0);
}