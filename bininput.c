//bininput.c: Using fread() and fwrite() functions for input and output
#include<stdio.h>	
#include<stdlib.h>

int main(void)
{
	FILE *fmessage;
	unsigned int num;//variable to hold the state of the display message
	if((fmessage=fopen("firsttimemessage.dat", "rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	num=0;
	fwrite(&num,sizeof(int),1,fmessage);
	return 0;
}