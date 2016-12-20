//dec2binrecursion: using recursion to convert from decimals to binary$
#include <stdio.h>
int n;
void decbin(int n)
{
	int r;
	r=n%2;
	if(r>=2)
		 decbin(n/2);
	putchar(r);
}
int main(void)
{
	int num;
	printf("enter the integer whose binary equivalent you want to know: ");
	scanf("%d", &num);
	decbin(num);

}