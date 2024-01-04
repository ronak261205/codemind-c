#include<stdio.h>
int palindrome(int n)
{
    int a,t,rev=0;
    t=n;
    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(rev==t)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return (n);
}
int main()
{
    int n;
    scanf("%d",&n);
    int res=palindrome(n);
}