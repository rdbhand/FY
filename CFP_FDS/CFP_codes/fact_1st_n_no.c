#include<stdio.h>

void fact(int n)
{
 int f=1;
 for(int i=1;i<=n;i++)
{
 f*=i;
}
printf("factorial of %d is %d\n",n,f);

}
void main()
{
int n,i;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact(i);
}
}