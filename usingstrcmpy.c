//usingstrcmpy.c: Learing to copy strings using the string compare function.
#include<stdio.h>
#include<string.h>
int main(void)
{
	char temp[81];
	char array_to_copy[81]="Learning to use the strcpy function";
    strcpy(temp,array_to_copy);
    printf("%s\n",temp);
    return 0;
}