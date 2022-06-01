#include<stdio.h>
int main()
{
    int n,m,i,j,c=0,x=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c+=i;
        }
    }
    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            x+=j;
        }
    }
    if(c==m && x==n)
    {
        printf("Amicable ");
    }
    else
    {
        printf("Not Amicable ");
    }
    
}