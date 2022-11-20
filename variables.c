#include<stdio.h>
int main()
{
int x= 67;
long int y=67754;
float f= 0.88;
char s= 'P';
printf("%d\n", x);
printf("%ld\n",y);
printf("%f\n",f);
printf("%c\n",s);
char ch;
printf("Enter a character: ");
scanf("%c", &ch);
printf("ASCII value of %c = %d", ch, ch);

return 0;
}
