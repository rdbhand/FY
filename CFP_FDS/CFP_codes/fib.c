//fibonachi sequence

#include<stdio.h>
// 1 2 3 5 8 13 21 34

void fib(int a,int b)
{
printf("%d\t%d",a,b);

int c=a+b;

while(c<100)
{
printf("\t%d",c);
a=b;
b=c;
c=a+b;
}

}
int main()
{
    fib(1,2);
    return 0;
}