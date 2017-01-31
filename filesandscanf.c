 //filesandscanf.c: Using scanf to read data from files.
#include<stdio.h>	
#include<stdlib.h>	

int main(void)
{
	char ch[20];
	FILE *fp;
	if ((fp = fopen("mytext.txt", "a+")) == NULL)
	{
		fprintf(stderr, "%s\n", "Can't open file \"mytext.txt\"\n");
		exit(1);
	}
	fprintf(fp,"%s","It's pretty cool learning to use arrays and files \n");
	rewind(fp);
	fscanf(fp,"%s",ch);
	fscanf(fp,"%s",ch);//Reading of second word in the fp file pointer.
	printf("ch = %s",ch);
	
	if(fclose(fp)!=0)
	{
		fprintf(stderr, "%s\n", "Unable to close opened file");
		exit(2);
	}
	return 0;
}