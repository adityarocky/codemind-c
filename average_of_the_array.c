#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    float b;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    b=s/float(n);
    printf("%.2f",b);
}