#include<stdio.h>

void fib(int n)
{
int i,a=0,b=1;
 int c=a+b;
 printf("%d\t%d",a,b);
 
for(i=3;i<=n;i++)
{
 printf("\t%d",c);
 a=b;
 b=c;
 c=a+b;
}

}
void main()
{
int n;

printf("Enter number:");

scanf("%d",&n);

fib(n);




}