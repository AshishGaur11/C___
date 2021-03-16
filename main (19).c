#include<stdio.h>
main()
{
float b,c; c=0; int a;
printf("here some thing.\n");
for (a=1; a<=10; a++)
{
printf("%d\n",a);
c=c+a;
}
printf("%f\n",c);
b=c/10;
printf("%f",b);
getch();
}

