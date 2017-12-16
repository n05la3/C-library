//ccolors.c: Using colors in c.
#include<stdio.h>
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"

#define RESET "\x1B[0m"
int main()
{
	
	printf("It's cool using colors in c,"GREEN" Hello world"RESET);
	return 0;
}