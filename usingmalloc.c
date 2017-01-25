//usingmalloc.c: memory allocation in c.
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n;
	printf("How many floating numbers do you wish to store during program run: ");
	scanf("%d",&n);
	float *fptr= (float *) malloc(n*sizeof(float));//fptr points to the address of the allocated memory.
	int i;
	if(fptr!=NULL)
	{

		for(i=0;i<n;i++)
	     {
		   printf("%s", (i==0)? "First number: ":"Next: ");
		   scanf("%f",fptr+i);//using the pointer to store values in the allocated memory.
	      }
	    puts("Here are the numbers you entered: ");
	    for(i=0;i<n;i++)
		   printf("%d = %f \n", i,*(fptr+i));
	    free(fptr);//frees memory pointed to by fptr.
	}
	else
		puts("Unable to allocate required memory.\n");
	
	return 0;
}