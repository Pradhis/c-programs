
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n,count=0;
    printf("Enter num:\n");
    scanf("%d",&n);
    a=ceil(sqrt(n));
    b=n;
    if(b==2||b==3)
    {
        printf("Prime");
    }
    for(int i=2;i<=a;i++)
    {
        if(b%i==0)
            count=1;

    }
    if(count==0&&b!=1)
        printf("Prime");
    else
    {
        printf("Not prime");
    }
    return 0;
}
