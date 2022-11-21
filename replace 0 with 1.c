
#include<stdio.h>
int main()
{
    int a,b=0,rem;
    printf("Enter num:\n");
    scanf("%d", &a);
    if(a == 0)
    {
        b=1;
    }
    while(a>0)
        {
            int rem = a%10;
            if(rem == 0)
            {
                rem = 1;
                a/=10;
                b=b*10+rem;
            }
            a= 0 ;
            while(b>0)
            {
                int r = b%10;
                a*=10 + r;
                b /= 10;
                }
                printf("Converted number is: %d" ,a);
                return 0;

    }
}
