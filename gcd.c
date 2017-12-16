//Computing the GCD without using the Euclid's Algorithm
//showing the actual computation using a table
#include<stdio.h>
int main()
{

    int i,gcd=1,n,m,suspect_Gcd;
    printf("Please enter the two numbers for GCD computing: ");
    scanf("%d %d", &n,&m);
    if(n>m)
      suspect_Gcd=n;
    else
      suspect_Gcd=m;
    printf("\t\t   %d |  %d\n",m,n);
    puts("\t\t+------------+");
    for(i=2;i<=suspect_Gcd; i++)
    {
      while(n%i==0&&m%i==0)
       {
          do{
            gcd=gcd*i;
            n=n/i;
            m=m/i;
            printf("\t\t %d,  %d,  %d\n", i,m,n);
           }
            while(n%i==0&&m%i==0);
          i++;
        }
    }
    printf("The GCD for %d and %d is: %d", n*gcd,m*gcd,gcd);
    getch();
    return 0;
}
