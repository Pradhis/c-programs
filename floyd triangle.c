#include<stdio.h>
int main()
{
    int i,j,n;
    int count=1;
    printf("Enter rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}
