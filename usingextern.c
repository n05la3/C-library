//Usng the extern keyword
#include<stdio.h>
int num=10;
int main(void)
{
	extern int num;//num cannot be initialised because it is already being defined externally.
	printf("%d", num);
	num=15;
	printf("\n%d", num);
	return 0;
	
}