#include<stdio.h>

int main()
{
    int size,arr[10],i;
    printf("Enter size of array : ");
    scanf("%d",&size);
    
    printf("Enter %d numbers to sort: ",size);
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size;i++)
    {
        for(i=0;i<size-1-i;i++)
        {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            
        }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}