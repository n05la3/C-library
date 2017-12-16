//exercise1: Using strings
#include <stdio.h> 
#define SIZE 10
void get_char(char *my_char, int n)
{
	int i=0;char ch;
	while((ch=getchar())!='\n'&&ch!='\t'&&ch!=' '&&i!=n)
	{
		*(my_char+i) = ch;
		i++;
	}
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