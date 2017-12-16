//charsearch.c: micmicking the strchr function
#include <stdio.h>
#include <string.h>
char *search_char(char *str1, char *str2)
{
    if((strcmp(str1,str2))==0)
    	return str2;
    //else return NULL;
}

int main(void)
{
	char *str1 = "My name is Chiatiah Calson";
    char *str2 = "M";
	printf("The result is: %s ",search_char(str1,str2));

	return 0;

}