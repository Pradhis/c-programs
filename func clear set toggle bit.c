#include <stdio.h>
int setBit(int n, int bit)
{
    return (n | (1 << (bit- 1)));
}
int clearBit(int n, int bit)
{
    return (n & (~(1 << (bit - 1))));
}
int toggleBit(int n, int bit)
{
    return (n ^ (1 << (bit- 1)));
}
int main()
{
    int n,bit;
    printf("Enter num:\n");
    scanf("%d",&n);
    printf("Enter the bit to get set:\n");
    scanf("%d",&bit);

    printf("Set: %d\n",setBit(n, bit));
    printf("Cleared: %d\n",clearBit(n, bit));
    printf("Toggled: %d\n",toggleBit(n, bit));
    return 0;
}
