#include<stdio.h>

int main()
{
    int n;
    printf("Enter num:\n");
    scanf("%d",&n);
    int a = 0;
    int b=1;
    printf("%d %d",a,b);
    int res;
    for(int i = 2; i < n; i++)
        {
            res = a + b;
            a = b;
            b = res;

        printf(" %d ",res);
    }

    return 0;
}
