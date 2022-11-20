#include <stdio.h>
#include <stdlib.h>
extern int a,b;
int main()
{
    printf("sum is %d\n",a+b);
    printf("sub is %d\n",a-b);
    printf("mul is %d\n",a*b);
    printf("div is %d\n",a/b);
    printf("mod is %d\n",a%b);
    return 0;
}
