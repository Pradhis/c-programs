
#include<stdio.h>
#include<math.h>
int main()
{

    long n,dec=0,base=8,rem,i=0;
    printf("Enter binary number:\n");
    scanf("%ld",&n);
    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*pow(base,i);
        n/=10;
        i++;
    }
    printf("Dec num is %d",dec);
    return 0;
}
