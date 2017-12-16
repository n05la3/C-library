#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	/*static unsigned int num=5;//num cannot be linked to other files.
	printf("%d\n", num);*/
	register unsigned int i;//More of a request to make available fastest memory if avaible
	for(i=0;i<=10;i++)
	{
		auto unsigned int num=20;//can only be visible in this block.
		printf("%d: = %d",i,num);
		puts(" ");
	}

	
	return 0;
}