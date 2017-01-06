#include<stdio.h>
int main()
{
    int startday, count, monthnum;
    printf("Please enter the startday and the number of days in the month \n");
    printf("FORMAT STARTDAY: sun=1....sat=7: ");
    scanf("%d %d", &startday,&monthnum);
    printf("  SUN  MON  TUES  WED THURS  FRI SAT\n");
    printf("  ------------------------------\n");
    
    
    startday=startday-1;
    for(count=1; count<=startday; count++)
       printf("     ");
    for(count=1; count<=monthnum; count++)
    {
        printf("%5d", count);
        if((count+startday)%7==0)
        printf("\n");
    }
 
 return 0;   
}
