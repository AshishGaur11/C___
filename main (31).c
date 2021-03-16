#include<math.h>
#include<stdio.h>
main()
{
int x,m,i,d; i=0;
printf("enter the value for armstrong number\n");
scanf("%d",&m); d=m;
while (m!=0)
{
x=m%10;
i=i+pow(x,3);
m=m/10;
}
if (d==i)
printf("yes its a armstrong");
else
printf("thats not armstrong");
getch();
}
