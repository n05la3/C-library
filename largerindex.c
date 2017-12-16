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
        {
    		max = *(num+i);
            return i;
        }
    }
    
}
int main(void)
{
	const int array_to_compare[SIZE]={1,2,3,4,5};
    printf("%s %d\n","The index for the larger element is: ",larger_int(array_to_compare,SIZE));
	exit(0);
}