#include <stdio.h>
main()
{
int a,b,c,i; b=1; a=0;
printf("make a fabonici series\n");
for (i=0; i<=10; i++)
{
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
}
getch();
}
