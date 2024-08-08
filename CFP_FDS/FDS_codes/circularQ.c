#include <stdio.h>

int q[20], size, front = -1, rear = -1;

void enque()
{

  if (rear == -1 && front == -1)
  {
    rear = 0;
    front = 0;
    printf("Enter number to enque :");
    scanf("%d", &q[rear]);
    printf("%d is Enqued.\n", q[rear]);
  }

  else if (((rear + 1) % size) == front)
  {
    printf("Queue is Full.\n");
  }

  else
  {
    rear = (rear + 1) % size;

    printf("Enter number to enque :");
    scanf("%d", &q[rear]);
    printf("%d is Enqued.\n", q[rear]);
  }
}

void deque()
{
  if (rear == -1 && front == -1)
  {
    printf("Queue is Empty!!");
  }

  else if (rear == front)
  {
    printf("Element dequeued is %d\n", q[front]);
    rear = -1;
    front = -1;
  }

  else
  {
    printf("Element dequeued is %d\n", q[front]);
    front = (front + 1) % size;
  }
}

void display()
{
  if (front == -1 && rear == -1)
  {
    printf("Queue is Empty!!\n");
  }
  else
  {
    for (int i = front; i != rear; i = (i + 1) % size)
    {
      printf("%d\n", q[i]);
    }
  }
}
void main()
{
  int ch, choice;

  printf("Enter size of Queue :");
  scanf("%d", &size);
  do
  {
    printf("Queue Operations:\n1.enqueue()\n2.dequeue\n3.display\nEnter your choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      enque();
      break;

    case 2:
      deque();
      break;

    case 3:
      display();
      break;

    default:
      printf("Invalid choice!!");
    }
    printf("Do you want to continue(1/0):");
    scanf("%d", &choice);

  }

  while (choice == 1);
}