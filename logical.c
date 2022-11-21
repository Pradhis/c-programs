#include <stdio.h>
int main()
{
    int a,b,c,res;
    printf("Enter value of a:\n");
    scanf("%d",&a);
    printf("Enter value of b:\n");
    scanf("%d",&b);
    printf("Enter value of c:\n");
    scanf("%d",&c);
    res= (a == b) && (c > b);
    printf(" value of (a == b) && (c > b) is %d \n", res);
    res = (a == b) && (c < b);
    printf("value of (a == b) && (c < b) is %d \n", res);
    res = (a == b) || (c < b);
    printf("value of (a == b) || (c < b) is %d \n", res);
    res = (a != b) || (c < b);
    printf("value of (a != b) || (c < b) is %d \n", res);
    res = !(a != b);
    printf("value of !(a != b) is %d \n", res);
    res= !(a == b);
    printf("value of !(a == b) is %d \n", res);

    return 0;
}
