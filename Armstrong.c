#include<stdio.h>
int main()
{
    int n,count=0,r=0,mul=1,c,rem,temp;
    printf("enter num:\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp/=10;
        count++;

    }
    c=count;
    temp=n;
    while(temp!=0)
    {

        rem=temp%10;
        while(c!=0)
        {

            mul=mul*rem;
            c--;

        }
        r=r+mul;
        c=count;
        temp/=10;
        mul=1;
    }
    if(r==n)
    {
        printf("Armstrong");

    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}
