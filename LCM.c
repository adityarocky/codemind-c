#include<stdio.h>
int main()
{
    int a,b,c,d,i,l;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        d=i;
        
    }l=(a*b)/d;
    printf("%d",l);
}