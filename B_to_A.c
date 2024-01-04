#include<stdio.h>
int b_to_a(int a,int b)
{
    int i;
    for(i=b;i>=a;i--)
    {
        printf("%d ",i);
    }
    return (a,b);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=b_to_a(a,b);
}