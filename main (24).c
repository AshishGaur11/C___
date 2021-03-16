#include<stdio.h>
main()
{
int a,i,f; f=0;
printf("To check number is prime or not?\n");
scanf("%d",&a);
for (i=1 ;i<=a; i++)
{
if (a%i==0)
{f=f+1;}
}
if (f==2)
printf("Its prime");
else
printf("Its not prime");
getch();
}
