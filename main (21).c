main()
{
int i,c,d; c=0;
printf("numbers b/w 1 to 100 which are divisible by any number\n");
scanf("%d",&d);
for (i=1; i<=100; i++)
{
if (i%d==0)
{c=c+1;}
}
printf("%d\n",c);

}
