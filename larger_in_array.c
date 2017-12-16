//larger_in_array: Function to return the larger element in an array of int
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int larger_int(const int *num, int n)
{
     int i,max=*num;
    for(i=0;i<n;i++)
    {
    	if(*(num+i)>max)
    		max = *(num+i);
    }
    return max;
}
int main(void)
{
	const int array_to_compare[SIZE]={1,2,3,4,5};
    printf("%s %d\n","The larger of the five elements is: ",larger_int(array_to_compare,SIZE));
	exit(0);
}