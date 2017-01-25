//mickmickingrand.c: Implementing the the srand function
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

static int seed=(unsigned)time(0);//seed has internal linkage
int rand0(void)
{
	seed=seed+83483340;
	return (unsigned) seed%37;//generate the randon numbers depening on the value of seed.
}

int main(void)
{
	auto int i;//documenting that int is has automatic storage.
	for(i=0;i<6;i++)
		printf("guess %d = %d\n",i,rand0());
	return 0;
}