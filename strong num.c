#include<stdio.h>
int main()
{
    int n,i,fact=1,r=0,rem;
    printf("Enter num:\n");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;

        }
        r=r+fact;
        fact=1;
        temp/=10;
    }
    if(r==n)
    {
        printf("Strong num");
    }
    else
    {
        printf("not strong num");
    }
    return 0;
}
