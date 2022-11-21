
#include<stdio.h>
int main()
{

    int n,dec=0,base=1,rem,bin;
    printf("Enter binary number:\n");
    scanf("%d",&n);
    bin=n;
    while(bin!=0)
    {
        rem=bin%10;
        dec=dec+rem*base;
        bin/=10;
        base*=2;
    }
    printf("Dec num is %d",dec);
    return 0;
}
