#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(num>0)
{
printf("%d is positive number",num);
}
else if(num<0)
{
printf("%d is nagative number",num);
}
else
{
printf("given number is zero(0)");
}
return 0;
}
