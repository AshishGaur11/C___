#include<stdio.h>
main()
{
sum();
getch();
}
sum(int a, int b)
{
int c;
printf("enter the values\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum is>>%d",c);
}
