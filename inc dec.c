#include <stdio.h>
int main()
{
    int a = 20, b = 10;
    float c = 5.5, d = 15.15;

    printf("++a  is = %d \n", ++a);
    printf("--b is = %d \n", --b);
    printf("++c is  = %.2f \n", ++c);
    printf("--dis  = %.3f \n", --d);
    printf("a++ is = %d \n", a++);
    printf("b-- is = %d \n", --b);
    printf("c++ is  = %.2f \n", ++c);
    printf("d-- is  = %.3f \n", --d);

    return 0;
}
