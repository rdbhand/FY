//Linear search

#include<stdio.h>
void main()
{
    int n,i,a[20],key,flag=0;

    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("Enter number to search:");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("%d found at index %d",key,i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d not found!!",key);
    }

}




