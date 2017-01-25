//mickmickingrand.c: Implementing the the rand function
#include<stdio.h>
#include<stdlib.h>
static int seed = 1;//seed has internal linkage
int rand0(void)
{
	seed=seed+83483340;
	return (unsigned) seed%3212;//generate the randon numbers depening on the value of seed.
}

int main(int argc, char const *argv[])
{
	auto int i;//documenting that int is has automatic storage.
	for(i=0;i<6;i++)
		printf("guess %d = %d\n",i,rand0());
	return 0;
}