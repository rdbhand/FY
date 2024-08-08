//CALCULATOR IN C

#include<stdio.h>

void add(int x,int y)
{
printf("%d",x+y);
}
void sub(int x,int y)
{
printf("%d",x-y);
}

void mul(int x,int y)
{
printf("%d",x*y);
}


void div(int x,int y)
{
printf("%d",x/y);
}


int main()
{

int no1,no2;
char opr;
scanf("%d",&no1);
scanf("%c",&opr);
scanf("%d",&no2);
switch(opr)
{
case '+':add(no1,no2);
break;

case '-':sub(no1,no2);
break;

case '*':mul(no1,no2);
break;

case '/':div(no1,no2);
}

return 0;
}