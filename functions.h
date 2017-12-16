//functions.h: consists of all functions needed for tutorial 2 
void get_float(float *f_num)
{
	char ch;
	while((scanf("%f", f_num))!=1)
	{
		printf("Invalid, (sample 8.7, 3489, 45)\ntry again:");
		while((ch=getchar())!='\n')
		{
			printf(" ");//putchar(ch);//flush the character
			printf("\b");
		}

	}
}

float square(float num)
{
	return num*num;
}
void sum_average(float *n1, float *n2)
{
	*n1 = *n1+*n2;
	*n2 = *n1/2;
}

float max_of_10(float num1, float num2)
{
	return (num1>num2)? num1:num2;
}
float min_of_10(float num1, float num2)
{
	return (num1>num2)? num2:num1;
}

void get_int(int *n)
{
	char ch;
	while((scanf("%d", n))!=1)
	{
		printf("Invalid <try again>: ");
		while((ch=getchar())!='\n')
		{
			printf(" ");
			printf("\b");
		}
	}
}

extern void fget_ignore_newline(char *arr_no_newline)
{
	int i=0;
	while(arr_no_newline[i]!='\0')
	{
		if(arr_no_newline[i]=='\n')
		{
			arr_no_newline[i]='\0';
			break;
		}
		i++;
	}
}