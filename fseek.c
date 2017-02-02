//fseek.c: Using the fseek() function.
#include<stdio.h>
#include<stdlib.h>
#include"functions.h"
#include<string.h>
 int main(void)
 {
 	FILE *fp;
 	long LEN;
 	char name[20];
 	if((fp=fopen("userpass","w+"))==NULL)
 	{
 		fprintf(stderr, "%s\n", "Unable to open file \"userpass\"");
 		exit(1);
 	}
 	fprintf(fp, "%s\n","User name:" );
 	//rewind(fp);
 	//fseek(fp,11l,SEEK_SET);
 	printf("Enter User name to store in file userpass: ");
 	fgets(name,20,stdin);
 	fget_ignore_newline(name);
 	fprintf(fp,"%s\n",name);
 	//printf("lenght of name: %d",strlen(name));
 	//fseek(fp,18L,SEEK_SET);
 	fprintf(fp, "%s\n","Password: ");
 	if(fclose(fp)!=0)
 		fprintf(stderr, "%s\n", "Unable to close opened file");

 	return 0;
 }