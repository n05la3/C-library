#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE *fp;
	if((fp=fopen("myfile.txt","w+"))==NULL)
	{
		fprintf(stderr, "%s\n", "Fatal Error, Some files are missing");
		exit(EXIT_FAILURE);
	}
	//fwrite(&n_counter,sizeof(char),1,fp);
	//fwrite(&speed,sizeof(char),1,fp);
	char ptr_date[strlen(__DATE__)];
	fwrite(ptr_date,sizeof(char),strlen(__DATE__),fp);
	printf("%s\n", ptr_date);
	//fwrite(ptr_time,sizeof(char),strlen(__TIME__),fp);
	//fwrite(user_name,sizeof(char),strlen(user_name),fp);

}