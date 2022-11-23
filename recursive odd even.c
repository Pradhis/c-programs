#include<stdio.h>
void odd();
void even();
int n=1;
int range;
printf("Enter range:\n");
scanf("%d",&range);
void odd()
{
    if(n<=range)
    {
        printf("%d",n+1);
        n++;
        even();
    }
    return ;
}
void even()
{
    if(n<=range)
    {
        printf("%d",n-1);
        n--;
        odd();
    }
    return ;
}
int main()
{
    odd();
}
