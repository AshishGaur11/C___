main()
{
int a;
printf("Enter the marks>>\n");
scanf("%d",&a);
if (a>=80&&a<=100)
printf("its A");
else if (a<=79&&a>=60)
printf("its B");
else if (a<=59&&a>=40)
printf("its C");
else if (a<=40&&a>=30)
printf("its D");
else
printf("sorry its fail");
}
