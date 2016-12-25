//namesearch.c: Learning to use the strcmp function
#include<stdio.h>
#include<string.h>
#define SIZE 10
const char *name[SIZE]= {"Prince, Pot, Pen, Pineaple, People, Pin, Purse, Program, Pet, Pen"};

int main(void)
{
	char my_guess[81];
	int i;
	printf("Guess a name starting with P, stored in the p-name database: ");
    fgets(my_guess,81,stdin);
    for(i=0; i<SIZE,i++)
    {
    	if(!strcmp(my_guess,name[i]))
    		return 
    }
    return 0;
}