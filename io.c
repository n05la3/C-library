//io.c: Learning functions to perform input output.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	
#define LEN 40
int main(int argc, char const *argv[])
{
	int ch;
	char name[LEN];
	int count;
	FILE *in, *out;
	//checking for command line arguments.
	if(argc<2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(1);
	}
	//setting up input
	if((in=fopen(argv[1],"r"))==NULL)
	{
		fprintf(stderr,"Unable to open file: %s \n", argv[0]);
		exit(2);
	}
	//setting up output
	strncpy(name,argv[1],LEN-5);
	name[LEN-5]='\0';
	strcat(name,".red");
	if((out=fopen(name,"w"))==NULL)
	{
		fprintf(stderr, "%s\n","Can't create file");
		exit(3);
	}
	//copy data
	while(ch=getc(in)!=EOF)
		if(count++%3==0)
			putc(ch,out);
	// clean up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"Error in closing files\n");
    return 0;

}