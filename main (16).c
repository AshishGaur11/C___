main()
{
int a,i;
printf("enter the marks\n");
scanf("%d",&a);
i=a/10;
switch (i)
{
case 10:
case 9:
case 8:
printf("A grade");
break;
case 7:
case 6:
printf("B grade");
case 5:
case 4:
printf("C garade");
break;
default:
printf("fail");
break;
}
}
