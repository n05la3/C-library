#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char num[81];
	printf("%s\n", "Enter a string to get corresponding integer: ");
    scanf("%s",num);
	int n_num;
	n_num=atoi(num);
	printf("%d\n",n_num);
	return 0;
}