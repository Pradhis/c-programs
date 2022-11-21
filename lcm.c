#include<stdio.h>

int main()
{
    int a,b,lcm;
    printf("Enter first num:\n");
    scanf("%d",&a);
    printf("Enter second num:\n");
    scanf("%d",&b);
    int max = (a>b)?a:b;
    for(int i= max ;i <=a*b;i++)
        {
            if(i % a== 0 && i % b == 0)
            {
                lcm = i;
                break;
            }
        }

    printf("lcm is %d", lcm);

    return 0;
}
