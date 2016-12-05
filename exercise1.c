//exercise1: Using strings
#include <stdio.h> 
#define SIZE 10
void get_char(char *my_char, int n)
{
	int i;
	for(i=0; i<n; i++)
		*(my_char+i) = getchar();
}
int main(void)
{
	char ch[SIZE];
	int i;
	get_char(ch,SIZE);
	for(i=0; i<=SIZE; i++)
		printf("element %d == %c \n",i,*(ch+i));
	return 0;
}