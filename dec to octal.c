
#include<stdio.h>
int main()
{
    int dec[8];
    int i = 0,n;
    printf("Enter num:\n");
    scanf("%d",&n);
    while (n> 0)
    {
        dec[i] = n%8;
        n/=8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",dec[j]);
    }
    return 0;
}
