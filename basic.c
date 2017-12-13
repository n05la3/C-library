#include<stdio.h>
#include<stdlib.h>
struct book
{
	char name[30];
	int pages;
	float cost;
	char author[3][30];
};
int main()
{
	struct book library={
		"First name",
		30,
		3003240,
		{"King Geoge","Bibu Bih","Esther Chefang"}
	};
	library.pages = 10;
	printf("%s\n", library.author[1]);
}