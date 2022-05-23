#include<stdio.h>
int main()
{
    int n,re=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    printf("%d",re);
    return 0;
}