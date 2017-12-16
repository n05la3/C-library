//pointerexericise.c: copying arrays
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
void copy_array(const double source[], double target[], int n)
{
	int i;
	for(i=0;i<n;i++)
		target[i]=source[i]; 
}
void copy_ptr(const double *source_ptr, double *target_ptr, int n)
{
	int i;
	for(i=0;i<n;i++)
		*(target_ptr+i)= *(source_ptr+i);
}

int main(void)
{
	int i;
	double array_source[]={1,2,3,4,5};
	double array_target[5];
	double ptr_target[5];
	copy_array(array_source,array_target,SIZE);
	copy_ptr(array_source,ptr_target,SIZE);
	exit(0);
}