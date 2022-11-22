#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter rows :\n");
scanf("%d",&n);
for(i=0;i<n;i++)
   {
     for(j=n;j>i+1;j--)
       {
          printf(" ");
       }
     for(k=0;k<=i*2;k++)
       {
          printf("*");
       }
    printf("\n");
   }
}



