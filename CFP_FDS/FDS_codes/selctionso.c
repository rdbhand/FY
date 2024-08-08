// selection  sort

#include <stdio.h>

void main()
{
    int n, i, j, arr[20], min, key, temp;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter %d numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }

            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}