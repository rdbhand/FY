#include <stdio.h>

int main()
{
    int i, j, size, arr[10];
    printf("Enter size of array:");
    scanf("%d", &size);

    printf("Enter %d Numbers:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < size; i++)
    {
        int key = arr[i];
        for (j = i - 1; j >= 0 && key < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }

    // Displaying sorted array
    printf("Sorted array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}