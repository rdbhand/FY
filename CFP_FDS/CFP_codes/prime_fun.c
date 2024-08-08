//function for prime numbers

#include<stdio.h>

void prime(int n)
{
    int i,flag=0;

    if(n==1)
    {
        printf("Number is neither prime nor composite!!");
    }

    else
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                flag=1;
                printf("Number is composite!!");
                break;
            }
        }

        if(flag==0)
        {
            printf("%d is prime!!",n);
        }

    }

}

void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
}