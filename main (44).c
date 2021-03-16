#include <stdio.h>
main()
{
int c;
c=sum();
printf("%d",c);
getch();
}
sum(int x,int y)
{
int z;
printf("enter the values\n");
scanf("%d%d",&x,&y);
z=x+y;
return z;
}
