#include<stdio.h>
main()
{
int ch,c,a,b ;
printf("enter the values 1 for add 2 for sub 3 for divide 4 for multiply.>>\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
    printf("numbers for addition Please.\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    break;
case 2:
    printf("numbers for subtraction please.\n");
    scanf("%d%d",&a,&b);
    c=a-b;
    break;
case 3:
    printf("numbers for division please.\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    break;
case 4:
    printf("numbers for multiplication please.\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    break;
default :
    printf("thats a wrong choice!!");
    break;
}
printf("& that is>> %d",c);
getch();
}
