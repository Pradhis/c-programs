#include <stdio.h>
int main ()
{
    int a,b,c,temp,res;
    printf("Enter first num:\n");
    scanf("%d",&a);
    printf("Enter second num:\n");
    scanf("%d",&b);
    printf("Enter third num:\n");
    scanf("%d",&c);
    temp = a>b ?a:b;
    res = temp>c? temp:c;

    printf("largest is %d ", res);
    return 0;
}

