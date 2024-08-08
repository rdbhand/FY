//decimal to binary using stack
#include<stdio.h>

int stack[10],top=-1;

void push(int rem)
{

    top++;
    stack[top]=rem;

}

void main()
{
    int n,rem,i;
    printf("Enter decimal number:");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%2;
        n/=2;
        push(rem);
    }

    printf("Binary number is:",n);
    for(i=top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
}     