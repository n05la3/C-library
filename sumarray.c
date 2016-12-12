//sumarray.c: summing arrays using pointer arithmetic
#include<stdio.h>
#define SIZE 10
float sum_array(float* number_pointer, float* end);
int main(void)
{
	float my_array[SIZE] = {4,2,3,4,5,6,7,8,9,10};
	printf("%s: %3.3f\n","The sum of the ten numbers is",sum_array(my_array,(my_array+SIZE)));
}
float sum_array(float* number_pointer, float* end)
{
	float total = 0;
	while(number_pointer<end)
	{	
		total += *(number_pointer++);
        
	}
	return total;
    
} 

