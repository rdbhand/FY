// Simple Queue

#include<stdio.h>
int que[10],size,rear=-1,front=-1;

void enque(int x)
{
    if(rear==size-1)
    {
        printf("Queue is Full\n");
    }

    else if(rear==-1&&front==-1)
    {
        rear=0;
        front=0;
        que[rear]=x;
        printf("%d is Enqued\n",x);
    }

    else
    {
        rear++;
        que[rear]=x;
        printf("%d is Enqued\n",x);
    }
}


deque()
{
    if(rear==-1)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        printf("%d is dequed\n",que[front]);
        front++;
    }
}

void display()
{
    if(rear==-1)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        for(int i=rear; i>=front; i--)
        {
            printf("%d\n",que[i]);
        }
    }
}
void main()
{
    printf("Enter Size of queue:");
    scanf("%d",&size);

    display();
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    display();
    deque();
    deque();
    display();

}