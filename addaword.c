//addaword.c: i/o functions
#include<stdio.h>
#include<stdlib.h>
#define SIZE 40

int main(void)
{
	FILE *fp;
	char words[SIZE];
	if((fp=fopen("wordy.txt","a+"))==NULL)//a+ mode enables for read, write. 
	{
		fprintf(stdout,"%s","Could not open the file\n");
		exit(1);
	}
	//fscanf(fp,"%s",words);
	printf("Add words to \"wordy file\"\n <Press Enter at the start of a line's input>: ");
	while(fgets(words,SIZE,stdin)!=NULL&&words[0]!='\n')
		fprintf(fp,"%s",words);
	puts("\nFile Contents: \n");
	rewind(fp);//ensures reading starts from beginning of the file.
	while((fscanf(fp,"%s",words))==1)//ensuring this while loop works well.
		puts(words);
    if(fclose(fp)!=0)
		fprintf(stderr, "%s\n", "Unable to close the file\n");
	return 0;
}