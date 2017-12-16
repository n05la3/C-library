//txtfiles.c: using fopen()
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	FILE *fp;
	fp=fopen("myfile.txt","w");
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	exit(0);
}