#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	if((fp=fopen("myfile","rb+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	int num=79844578;
	int *n;
	fwrite(&num,sizeof(int),1,fp);
	rewind(fp);
	fscanf(fp,"%d",n);
	printf("%d\n", num);
	return 0;
}