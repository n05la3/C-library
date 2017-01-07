//swapnoextravariable.c: Performing a swap with no extra variable
#include<stdio.h>
void swap(int *a,int *b)
{
	*a=*a**b;
	*b=*a/(*b);
	*a=*a/(*b);
}

int main(void)
{
	int a=2,b=3;
	printf("a = 2 and b = 3\n");
	swap(&a,&b);
	printf("a = %d and b = %d",a,b);
}
