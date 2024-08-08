//decimal to binary using stack
#include<stdio.h>

int stack[10],top=-1;

void push(int rem)
{

    top++;
    stack[top]=rem;

}

void pop()
{

top--;

}

void main()
{
    int n,rem;
    printf("Enter decimal number:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%2;
        n/=2;
        push(rem);
    }

    printf("Binary number is:");
    while(top!=-1)
    {
        printf("%d",stack[top]);
        pop();
    }
}     