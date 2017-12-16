//fseek.c: Using the fseek() function.
#include<stdio.h>
#include<stdlib.h>
#include"functions.h"
#include<string.h>
 int main(void)
 {
 	FILE *fp;
 	long LEN;
 	char name[81];
 	if((fp=fopen("userpass","r"))==NULL)
 	{
 		fprintf(stderr, "%s\n", "Unable to open file \"userpass\"");
 		exit(1);
 	}
 	//fprintf(fp, "%s\n","Calson:" );

 	//rewind(fp);
 	//fseek(fp,11l,SEEK_SET);
 	//printf("Enter User name to store in file userpass: ");
 	//fgets(name,20,stdin);
 	//fget_ignore_newline(name);
 	//fprintf(fp,"%s\n",name);
 	//printf("lenght of name: %d",strlen(name));
 	//fseek(fp,18L,SEEK_SET);
 	//fprintf(fp, "%s\n","Password: ");
 	rewind(fp);
 	fgets(name,81,fp);
 	printf("The name is: %s", name);
 	if(fclose(fp)!=0)
 		fprintf(stderr, "%s\n", "Unable to close opened file");

 	return 0;
 }