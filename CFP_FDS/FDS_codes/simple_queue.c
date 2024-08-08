// simple queue

#include <stdio.h>

int x, size, q[20], front = -1, rare = -1;

void enqueue()
{
  rare++;
  if (rare == size)
  {
    printf("Queue is full!!\n");
  }

  else
  {
    printf("Enter number to Enqueue:");
    scanf("%d", &x);
    q[rare] = x;
    printf("%d is enqueued!\n", x);
  }
}

void dequeue()
{
  front++;
  if (front == size)
  {
    printf("Queue is Empty\n!!");
  }

  else
  {
    printf("%d is dequeued!!\n", q[front]);
  }
}

void main()
{
  int n, ch, choice;

  printf("Enter size of Queue:");
  scanf("%d", &size);

  do
  {
    printf("Queue Operations:\n1.Enqueue()\n2.Dequeue()\nEnter your choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
      enqueue();
      break;

    case 2:
      dequeue();
      break;
    }
    printf("Do you want to continue(1/0):");
    scanf("%d", &choice);
  }

  while (choice == 1);
}
