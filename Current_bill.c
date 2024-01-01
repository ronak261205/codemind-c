#include<stdio.h>
int main()
{
    int x;
    float cost,bill;
    scanf("%d",&x);
    if(x<=199)
    {
        cost=1.20;
    }
    else if(x>=200 && x<400)
    {
        cost=1.50;
    }
    else if(x>=400 && x<600)
    {
        cost=1.80;
    }
    else if(x>600)
    {
        cost=2.0;
    }
    bill=x*cost;
    if(bill>400)
    {
        printf("%.2f",(bill)+(bill*0.15));
    }
    else if(bill<400)
    {
        printf("%.2f",bill+100);
    }
}