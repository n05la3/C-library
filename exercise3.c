//solution3
#include <stdio.h>
#define SIZE 81
void get_word(char *my_word, int n)
{
	char ch; int i=0;
	while((ch=getchar())!='\n'&&ch!='\t'&&i!=n&&ch!=' ')
	{
	   *(my_word+i) = ch;
		i++;	
	}
	*(my_word+i) = '\0';

	//this should stand for where there is a space and there a NULL character is placed making it a string

}
int main(void)
{

	printf("enter a line: ");
	char get_line[SIZE];
	get_word(get_line,81); 
	printf("The first word in the line entered is: %s \n",get_line);
	
	return 0;
}