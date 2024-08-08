// Bubble sort

#include <stdio.h>

void main()
{
    int n, i, j, arr[20], temp;
    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter %d numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // displaying sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}