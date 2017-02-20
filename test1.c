#include<stdio.h>	
#include<stdlib.h>
int main(void)
{
	int num1=10;
	char num2;
	FILE *fb,*ft;
	if((fb=fopen("myfile","w+b"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
    fwrite(&num2,sizeof(char),1,fb);
    fwrite(&num1,sizeof(int),1,fb);    
    rewind(fb);
 	fseek(fb,1L,SEEK_SET);
 	fread(&num1,sizeof(int),1,fb);
 	printf("%d\n",num1);
	return 0;
}