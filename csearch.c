//chsearch.c: using the strncmp function to perform a "ch" search
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 10
#define LIM 81
int main(void)
{
	int i,ch_count=0;
    char *ch_search[SIZE]= {"Church","Hair","Thief","Chair","Farm","Film","Chief","Kettle","Chat","Chef"};
	char *ch_store[SIZE];
    for(i=0;i<SIZE;i++)
    {
    	if(strncmp("Ch",ch_search[i],2)==0)
    		ch_store[ch_count++]=ch_search[i];
    }

    printf("Found: %d\n",ch_count);
    for(i=0;i<ch_count;i++)
    	printf("%s,",ch_store[i]);
    printf("\b");
    printf("%s\n", " in the ch database all begin in ch\n");

    return 0;
}