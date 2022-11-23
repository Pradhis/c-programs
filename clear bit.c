#include <stdio.h>
int main()
{
    int n,bit;
    printf("Enter num:\n");
    scanf("%d",&n);
    printf("Enter the bit to get clear:\n");
    scanf("%d",&bit);
    int res=n&(~(1 << (bit- 1)));
    printf("bit after clear is = %d\n",res);
    return 0;
}
