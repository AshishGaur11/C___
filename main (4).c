#include<math.h>
main()
{
float a,b,c,s,m;
printf("enter the values for triangle");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
m=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f\n",s);
printf("%f",m);
}
