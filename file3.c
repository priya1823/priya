#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nenter the number:");
scanf("%d",&a);
if(a%2==0&&a>=0)
{
printf("\nEven");
}
else if(a<=0)
{
printf("\nInvalid");
}
else
{
printf("\nOdd");
}
getch();
}
