#include <stdio.h>
int main()
{
    int n,bit;
    printf("Enter num:\n");
    scanf("%d",&n);
    printf("Enter the bit to get toggle:\n");
    scanf("%d",&bit);
    int res=n^(1 << (bit- 1));
    printf("bit after toggle is = %d\n",res);
    return 0;
}
