#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int x[size],i;
    for(i=0;i<size;i++)
    scanf("%d",&x[i]);
    for(i=0;i<size;i++)
    {
        if((x[i]%2==0)&&(i%2!=0))
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    
}