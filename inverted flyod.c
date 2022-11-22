#include<stdio.h>
int main()
{
    int i,j,n;
    int count=0;
    printf("Enter rows:\n");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        count=count+i;
    }
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }
    return 0;
}

