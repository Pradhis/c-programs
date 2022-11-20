#include<stdio.h>
int sum();
int sub();
int mul();
int div();
int a=20,b=10;

int main()
{

    int y=80,x=55;

    printf("%d\n%d\n",x,y);
    printf("%d\n",x+y);
    sum();
    sub();
    mul();
    div();
    return 0;
}
int sum()
{
    printf("%d\n",a+b);
}
int sub()
{
    printf("%d\n",a-b);
}
int mul()
{
    printf("%d\n",a*b);
}
int div()
{
    printf("%d\n",a/b);
}
