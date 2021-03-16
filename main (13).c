#include<stdio.h>
main()
{
int a,b,ch; float c;
printf("enter the choice for 1 add, 2 sub, 3 dev, 4 mul, 5 remen\n");
scanf("%d%d%d",&ch,&a,&b);
if (ch==1)
c=a+b;
else if (ch==2)
c=a-b;
else if (ch==3)
c=a/b;
else if (ch==4)
c=a*b;
else if (ch==5)
c=a%b;
else
{printf("the choice is wrong");}
printf("%f",c);
getch();
}
