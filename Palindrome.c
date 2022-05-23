#include<stdio.h>
int main()
{
    int n,re=0,r,te;
    scanf("%d",&n);
    te=n;
    while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    if(te==re)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}