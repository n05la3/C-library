#include<stdio.h>
#include<stdlib.h>
float net_amount_payable(int uc)
{
    float VAT,TUA,NET;
    int RENT=500;
    if(uc<100)
    {
        TUA=uc*65;
         VAT=TUA*(1.8/100);
       //NET=TUA+VAT+RENT;
    }
    else 
    {
        TUA=uc*100;
        VAT=TUA*(1.8/100);
        // NET=TUA+VAT+RENT;
    } 
     NET=TUA+VAT+RENT;
    return NET;
}
int main()
{                                                                
    int R1[6],R2[6],R3[6];
    float R4[6];
    int i;
    printf("Enter prevoouis reading\n");
    for(i=1; i<=6; i++)
    {
        printf("enter reading %d:  ",i);
        scanf("%d",&R1[i]);
    }
    printf("\n");
    printf("Enter current reading\n");
    for(i=1; i<=6; i++)
    {
        printf("enter reading %d:  ",i);
        scanf("%d",&R2[i]);
    }
     printf("\n");
    for(i=1; i<=6; i++)
    {
        R3[i]=R2[i]-R1[i];
    }
    for(i=1; i<=6; i++)
    {
        R4[i]=net_amount_payable(R3[1]);
    }
    printf("prevouisreading\tcurrentreading\tunitsconsumed\tnetamountpayable\n");
    for(i=1; i<=6; i++)
    {
        printf("     %d\t           %d\t            %d\t              %.1f\n", R1[i],R2[i],R3[i],R4[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
