// Insertion sort

#include <stdio.h>

void main()
{

    int n, i, j, key, arr[20];

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter %d numbers:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (key < arr[j] && j >= 0)
        {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
