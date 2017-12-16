//namesearch.c: Learning to use the strcmp function
#include<stdio.h>
#include<string.h>
#define SIZE 10
//const char *my_p_name[SIZE]= {"Prince, Pot, Pen, Pineaple, People, Pin, Purse, Program, Pet, Pen"};
int p_search(char *p_guess, char *p_name,char *p_found,int n)
{
	int i,p_count=0;
	for(i=0; i<n;i++)
		if(!strcmp(p_guess,p_name[i]))
    	{
    		p_found+i=name[i];
    		p_count++;
    	}
    return p_count;
}

void printstr(char *array)
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("%s", array);
}

int main(void)
{
	char my_guess[81],correct_guess[81];
	
	printf("Guess a name starting with P, stored in the p-name database: ");
    fgets(my_guess,81,stdin);
    p_search(my_guess,my_p_name,correct_guess,SIZE);
    printstr(correct_guess);
    return 0;
}