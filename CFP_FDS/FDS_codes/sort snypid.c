#include<stdio.h>

int main()
{
    int i,size,arr[10];
    printf("Enter size of array:");
    scanf("%d",&size);
    
    printf("Enter %d Numbers:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    //Displaying sorted array
    printf("Sorted array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}