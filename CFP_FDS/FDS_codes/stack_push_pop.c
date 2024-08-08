//Stack push & pop operation


#include<stdio.h>

int top=-1,stack[20];

void push(int size)
{
    if(top==size-1)
    {
        printf("stack overflow!\n");
    }

    else
    {
        top++;
        printf("Enter number to push: ");
        scanf("%d",&stack[top]);
        printf("%d pushed!!\n",stack[top]);
    }
}

void pop()
{

    if(top==-1)
    {
        printf("stack underflow!!\n");
    }

    else
    {
        printf("%d poped!!\n",stack[top]);
        top--;
    }

}

void display()
{
    if(top!=-1)
    {
        printf("\nstack:\n");
        for(int i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }

    else
    {
        printf("\nStack is Empty!!\n");
    }

}

void main()
{
    int size,choice,ch;
    printf("Enter size of stack:");
    scanf("%d",&size);

    do
    {
        printf("menu:\n1.push\n2.pop\n3.display\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push(size);
            break;

        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default :
            printf("Invalid choice!!\n");
        }

        printf("do you want to to menu(1/0):");
        scanf("%d",&ch);
    }

    while(ch==1);

}