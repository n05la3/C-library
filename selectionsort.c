//selectionsort.c: Using the selection sort algorithm to sort int elements in an array
#include<stdio.h>
#define SIZE 10
void swap(int *ints_to_sort,int a,int b)//Only used because function won't require input from user.
{
	*(ints_to_sort+a)=*(ints_to_sort+a)**(ints_to_sort+b);
	*(ints_to_sort+b)=*(ints_to_sort+a)/(*(ints_to_sort+b));
	*(ints_to_sort+a)=*(ints_to_sort+a)/(*(ints_to_sort+b));
	//or use the addition and subtraction concepts
}
char ch;
void select_sortf(int *arr_to_sort)
{
	int i,j,i_min;//i_min: int variable to hold the index for the smallest number in the array.
	for(j=0;j<SIZE;j++)
	{
		i_min=j;
		for(i=j+1;i<SIZE;i++)
			i_min=(*(arr_to_sort+i)<*(arr_to_sort+i_min))? i:i_min;
	    if(i_min!=j)
			swap(arr_to_sort,j,i_min);
	}
}

void print_arr(int *arr)
{
	int i;
	for(i=0;i<SIZE;++i)
		printf("%d,",*(arr+i));
	printf("\b.\n");
}

int main(void)
{
	int ints_to_sort[SIZE]={1,5,4,3,12,6,7,8,-9,11};//test data should not include a zero else swap fails.
	printf("Unsorted array: ");
	print_arr(ints_to_sort);
	select_sortf(ints_to_sort);
	printf("\nSelection sorted array: ");
	print_arr(ints_to_sort);
	return 0;
}