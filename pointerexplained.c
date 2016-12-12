//showing the fact that the addresses of elements in an array can be gotten using the index
//since the name of the array is always the address of the first element.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int main(void)
{
	short index;
	short date[SIZE];
	double hour[SIZE];
	double* pt1 = hour;index
;	short* pt2 = date;
	printf("%23s %10s", "short","double");
	for(index=0; index<SIZE; index++)
	    printf("\nPointers + %d: %10p %10p\n", index,date+index,hour+index);
    exit(0);

}    