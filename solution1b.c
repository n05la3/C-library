//solution1.c: Using the conditional operator to decide on the grade.
#include <stdio.h>
#include "functions.h"


int main(void)
{
	int mark;
	printf("Enter a mark <as an integer>: ");
	get_int(&mark);
    printf("%c", (mark<50)? 'F':(mark>=50&&mark<60)? 'C':((mark>=60&&mark<70)? 'B':((mark>=70&&mark<80)? 'H':((mark>=80&&mark<90)? 'A':'G'))));
    char ch=(mark<50)? 'F':(mark>=50&&mark<60)? 'C':((mark>=60&&mark<70)? 'B':((mark>=70&&mark<80)? 'H':((mark>=80&&mark<90)? 'A':'G')));
    printf("%s", (ch=='H')? "\b\bB+":" ");
    printf("%s",(ch=='G')? "\b\bA+":" ");
	return 0;
}