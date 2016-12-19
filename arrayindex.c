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
    return (num+i)-num;
}
int main(void)
{
	const int array_to_compare[SIZE]={2,45,6,7,20};
    printf("%s %d %s %d \n",
    	"The larger of the five elements is: ",array_to_compare[larger_int(array_to_compare,SIZE)-1],"and it's index is: ",larger_int(array_to_compare,SIZE));
	exit(0);
}