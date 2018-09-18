#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
printf("\nEnter the letter:");
scanf("%c",&n);
if(n>='a'&&n<='z')
{
printf("\nAlphabet");
}
else
{
printf("\nNo");
}
getch();
}
