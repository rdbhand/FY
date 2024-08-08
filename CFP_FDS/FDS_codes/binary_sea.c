#include <stdio.h>

void main()
{
    int n, i, a[20], h, l, mid, key, flag = 0;

    printf("Enter size of array:");
    scanf("%d", &n);

    printf("Enter %d numbers in assending order:", n);
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        l = 0;
        h = n - 1;
        printf("Enter key to search:");
        scanf("%d", &key);
        for (i = 0; i < n; i++)
        {
            mid = (l + h) / 2;

            if (a[mid] == key)
            {
                printf("%d found at index %d", key, mid);
                flag = 1;
                break;
            }

            else if (a[mid] < key)
            {
                l = mid + 1;
            }

            else
            {
                h = mid - 1;
            }
        }

        if (flag == 0)
        {
            printf("%d not found!!", key);
        }
    }
}