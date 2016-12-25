//namesearch.c: Learning to use the strncmp function
#include<stdio.h>
#include<string.h>
const char name[81]= "My name is Prince";

int main(void)
{
	if(strcmp("Prince",name)==0)
	{
		printf("Yes Calson is found in the string given!\n");
	}
    else 
    	printf("%s\n","The entered name is not found in the string\n");
    return 0;
}