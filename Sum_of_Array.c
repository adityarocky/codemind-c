#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,su=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        su+=arr[i];
    }
    printf("%d",su);
}