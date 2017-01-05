//arraychar.c: pointer to character
#include<stdio.h>
int main(void)
{
	const char *name[3]= {"Prince", "The Pro", "The Don"};
	fputs(name[0],stdout);
	printf("%p", *name[0]);
	return 0;
}