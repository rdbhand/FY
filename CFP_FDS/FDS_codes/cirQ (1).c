// Circular Queue

#include<stdio.h>

int que[20],size,rear=-1,front=-1;

void cirenque(int x)
{
    if(rear==-1 && front==-1)
    {
        rear=0;
        front=0;
        que[rear]=x;
        printf("%d is Enqued\n",x);
    }
    
    else if((rear+1)%size==front)
    {
        printf("Circular Queue is Full\n");
    }
    
    else
    {
        rear=(rear+1)%size;
        que[rear]=x;
        printf("%d is Enqued\n",x);
    }
}

void cirdeque()
{
    if(rear==-1 && front==-1)
    {
        printf("Circular Queue is Empty\n");
    }
    
    else if(front==rear)
    {
        printf("%d is dequed\n",que[front]);
        front=-1;
        rear=-1;
    }
    
    else
    {
        printf("%d is Dequed\n",que[front]);
        front=(front+1)%size;
    }
}

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty\n");
    }
    
    else
    {
        int i = front;
        do
        {
            printf("%d\n", que[i]);
            i = (i + 1) % size;
        }
        while (i != (rear + 1) % size);
    }

}
void main()
{
    printf("Enter size of circular Queue:");
    scanf("%d",&size);
    display();
    cirenque(10);
    cirenque(20);
    cirenque(30);
    cirenque(40);
    cirenque(50);
    display();
    cirdeque();
    cirdeque();
    cirdeque();
    display();
    cirenque(10);
    cirenque(20);
    cirenque(30);
    display();

}