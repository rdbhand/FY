#include<stdio.h>

void main()
{
 int *a[10],n,i;
printf("Enter size of array:");
scanf("%d",&n);
 printf("Enter %d numbers:",n);
for(i=0;i<n;i++)
{
 scanf("%d",(a+i));
}
 
for(i=0;i<n;i++)
{
 printf("%d",*(a+i));
}
}