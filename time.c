//time.c: Program time in seconds and displayes the corresponing  hours, minutes and seconds.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	long sec, hr, min, t;
	printf("Enter time in seconds: ");
	scanf("%ld", &sec);
	hr = sec/3600;
	t = sec%3600;
	min = t/60;
	sec = t%60;
	if(hr>0)
		printf("%ld%s:%ld%s:%ld%s", hr,(hr>1)? "hrs":"hr",min,(min>1)? "mins":"min",sec,(sec>1)? "secs":"sec");//modify printing display
	else if(min>0)
		printf("%ld%s:%ld%s", min,(min>1)? "mins":"min",sec,(sec>1)? "secs":"sec");
 	else 
		printf("%ld%s", sec,(sec>1)? "secs":"sec");
}