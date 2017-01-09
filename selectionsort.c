//selectionsort.c: Using the selection sort algorithm to sort int elements in an array
#include<stdio.h>
#define SIZE 10
void swap(int *a,int *b,int n)//Only used because function won't require input from user.
{
	*a=*a*(*b+n);
	*(b+n)=*a/(*b+n);
	*a=*a/(*b+n);
	//or use the addition and subtraction concepts
}
char ch;
void select_sortf(int *arr_to_sort)
{
	int i,j,min=*arr_to_sort;
	printf("%d",arr_to_sort[0]);
	ch=getchar();
	for(j=0;j<SIZE;++j)
	{
		for(i=j;i<SIZE-1;i++)
		{
			if(*(arr_to_sort+i)<(*arr_to_sort+i+1))
				min=*(arr_to_sort+i);
			else min=*(arr_to_sort+i+1);
		}
		printf(": %d",min);
		ch=getchar();
		//swap(&min,arr_to_sort,j);
	    //arr_to_sort[j]=min;
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
	int ints_to_sort[SIZE]={10,9,8,7,6,5,4,3,2,1};
	printf("Unsorted array: ");
	print_arr(ints_to_sort);
	select_sortf(ints_to_sort);
	printf("\nSelection sorted array: ");
	print_arr(ints_to_sort);
	return 0;
}