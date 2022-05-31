#include<stdio.h>
int main()
{
    int n,r,s=0,e=0;
    scanf("%d",&n);
    while(n!=0)
    {
        
        r=n%10;
        if(r%2==1)
        
        {
            s++;
        }
        else 
        {
            e++;
        }
        n=n/10;
    }
    if(s==0)
    {
        printf("Even");
    }
    else if(e==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}