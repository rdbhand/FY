#include<stdio.h>

int sum_arr(int *a,int n)
{

    int i,sum=0;
    for(i=0; i<n; i++)
    {

        sum+=a[i];

    }

    return sum;

}

void main()
{
    int a[5]= {1,2,3,4,5};
    int n=5;
    printf("Sum of array elements is:%d",sum_arr(a,n));

}