//selectionsort.c: Using the selection sort algorithm to sort int elements in an array
#include<stdio.h>
#define SIZE 10
void swap(int *a,int *b)
{
	*a=*a**b;
	*b=*a/(*b);
	*a=*a/(*b);
}

void select_sortf(int *arr_to_sort)
{
	int i,j,min=*arr_to_sort;
	for(j=0;j<SIZE-1;++j)
	{
		for(i=j;i<SIZE;++i)
			if(*(arr_to_sort+i)<(*arr_to_sort+i+1))
				min=*(arr_to_sort+i);
			else min=*(arr_to_sort+i+1);
		swap(&min,arr_to_sort);
	    arr_to_sort[i+1]=min;
	}
}

void print_arr(int *arr)
{
	int i;
	for(i=0;i<SIZE;++i)
		printf("%d,",*(arr+i));
	printf("\b\b");
}

int main(void)
{
	int ints_to_sort[SIZE]={10,9,8,7,6,5,4,3,2,1};
	printf("Unsorted array: ");
	print_arr(ints_to_sort);
	select_sortf(ints_to_sort);
	printf("\nSelection sorted arrays: ");
	print_arr(ints_to_sort);
	return 0;
}