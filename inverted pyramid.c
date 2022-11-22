
#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter rows :\n");
scanf("%d",&n);
for(i=n;i>0;i--)
   {
      for(j=n;j>i;j--)
         {
            printf(" ");
         }
      for(k=0;k<i*2-1;k++)
         {
            printf("*");
         }
      printf("\n");
   }
}

