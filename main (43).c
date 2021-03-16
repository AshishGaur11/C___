#include <stdio.h>
main()
{
int a,b,c;
printf("enter the values\n");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("%d",c);
}
sum(int x,int y)
{
int z;
z=x+y;
return z;
}
