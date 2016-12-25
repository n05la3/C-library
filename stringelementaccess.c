//stringelementaccess.c: understanding the relation between strings and characters
#include<stdio.h>
int main(void)
{
	const char name[81] = "my name is D Pro";
	printf("%c\n",*(name+16));
	return 0;

}