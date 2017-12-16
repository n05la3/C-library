//txtfiles.c: using fopen()
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int ch;
	FILE *fp;
	fp=fopen("myfile.txt","r");
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	if(fclose(fp)!=0)
	{
		puts("File close error");
		exit(0);
	}
	else
		puts("File closed");
	    
}