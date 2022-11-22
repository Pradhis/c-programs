
#include<stdio.h>
int main()
{

    int n,rem,sum=0;
    printf("Enter num:\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {

        rem=n%i;
        if(rem==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("%d is perfect num",n);

    }
    else
    {
        printf("%d is not perfect num",n);
    }
    return 0;

}
