#include<stdio.h>
#include<string.h>
#define SIZE 81
int main(void)
{
    char name[81],second_name[81];
	printf("Please enter your first name: ");
	fgets(name,SIZE,stdin);
	printf("Please enter your second name: ");
	fgets(second_name,SIZE,stdin);
	strcat(name,second_name);
	printf("Your name is: ");
	fputs(name,stdout);
	return 0;
}