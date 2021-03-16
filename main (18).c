main()
{
int a,b,fa;
printf("enter the cloths type\n");
scanf("%d",&a);
switch (a)
{
case 1:
printf("enter the purchasing amount\n");
scanf("%d",&b);
if (b<=1000)
fa=b;
else if (b>=1001&&b<=2000)
fa=b-b*0.05;
else if (b>=2001&&b<=3000)
fa=b-b*0.075;
else if (b>=3001&&b<=4000)
fa=b-b*0.1;
else if (b>=4001&&b<=5000)
fa=b-b*0.12;
else
fa=b-b*0.15;
break;
case 2:
printf("enter the purchasing amount\n");
scanf("%d",&b);
if (b<=1000)
fa=b-b*0.05;
else if (b>=1001&&b<=2000)
fa=b-b*0.075;
else if (b>=2001&&b<=3000)
fa=b-b*0.1;
else if (b>=3001&&b<=4000)
fa=b-b*0.12;
else if (b>=4001&&b<=5000)
fa=b-b*0.15;
else
fa=b-b*0.2;
break;
}
printf("%d",fa);
}
