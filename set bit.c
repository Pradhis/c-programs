#include <stdio.h>
int main()
{
    int n,bit;
    printf("Enter num:\n");
    scanf("%d",&n);
    printf("Enter the bit to get set:\n");
    scanf("%d",&bit);
    int res=n|(1 << (bit - 1));
    printf("bit after set is = %d\n",res);
    return 0;
}
