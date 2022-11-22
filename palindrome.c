#include<stdio.h>
int main()
{
    int n,r=0,temp,rem;
    printf("Enter num:\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        r=r*10+rem;
        temp/=10;
    }
    if(r==n)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}
