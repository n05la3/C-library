//solution1.c
#include <stdio.h>
#include "functions.h"

int main(void)
{
	int mark;
	printf("Enter a mark <as an integer>: ");
	get_int(&mark);
	if(mark<50)
		printf("If your mark is %d, then your grade is: %c\n",mark,'F');
	else if(mark>=50&&mark<60)
		printf("If your mark is %d, then your grade is: %c\n",mark,'C');
	else if(mark>=60&&mark<70)
		printf("If your mark is %d, then your grade is: %c\n",mark,'B');
	else if(mark>=70&&mark<80)
	    printf("If your mark is %d, then your grade is: %c+\n",mark,'B');
	else if(mark>=80&&mark<90)
		printf("If your mark is %d, then your grade is: %c\n",mark,'A');
	else if(mark>=90&&mark<=100)
		printf("If your mark is %d, then your grade is: %c+\n",mark,'A');
	return 0;
}