//alphaordernames.c: sorting names entered in alphabetical order using the selection sort algorithm.
#include<stdio.h>
#define LIM 5
int ct=0;//string counter.
void swap(char **ints_to_sort,int a,int b)//Only used because function won't require input from user.
{
	**(ints_to_sort+a)=**(ints_to_sort+a)***(ints_to_sort+b);
	**(ints_to_sort+b)=**(ints_to_sort+a)/(**(ints_to_sort+b));
	**(ints_to_sort+a)=**(ints_to_sort+a)/(**(ints_to_sort+b));
	//or use the addition and subtraction concepts
}

void strget(char *my_name[])
{
	while(ct<LIM && fgets(my_name[ct],30,stdin)!=NULL && my_name[ct][0]!='\n')
		ct++;
}

void select_sortf(char **arr_to_sort)
{
	int i,j,i_min;//i_min: int variable to hold the index for the smallest number in the array.
	for(j=0;ct<ct;j++)
	{
		i_min=j;
		for(i=j+1;i<ct;i++)
			i_min=(**(arr_to_sort+i+0)<**(arr_to_sort+i_min+0))? i:i_min;
		if(i_min!=j)
			swap(arr_to_sort,j,i_min);
	}
}

void print_arr(int **arr)
{
	int i;
	for(i=0;i<LIM;++i)
		printf("%d,",**(arr+i));
}


int main(void)
{
	char *names_to_sort[LIM];
	printf("Enter five names to be sorted <Key in ENTER at the start of a lines input to stop>: ");
	strget(names_to_sort);
	return 0;
}