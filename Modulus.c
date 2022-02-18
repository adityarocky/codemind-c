#include<stdio.h>
int main()
{
    int a,b,m;
    scanf("%d",&a);
    scanf("%d",&b);
    if((1<a<1000)||(1<b<10000))
    {
        m=a%b;
        printf("%d",m);
    }
}