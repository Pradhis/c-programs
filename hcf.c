#include<stdio.h>

int main()
{
    int a,b,hcf=1;
    printf("Enter first num:\n");
    scanf("%d",&a);
    printf("Enter second num:\n");
    scanf("%d",&b);
    for(int i = 1; i <=a || i <=b; i++) {
        if(a% i == 0 && b% i == 0)
            hcf = i;
    }

    printf("hcf is %d", hcf);
    return 0;
}
