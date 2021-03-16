#include<stdio.h>
main()
{
int a,i,c;
printf("enter the number for table\n");
scanf("%d",&a);
for (i=1; i<=10; i++)
{
c=a*i;
printf("%d\n",c);
}
getch();
}
