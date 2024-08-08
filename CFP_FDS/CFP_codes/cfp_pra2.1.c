#include<stdio.h>
int main()
{
    int a,b,c,ch;
    do {
        printf("Enter the the three sides of a triangle :\n");
        scanf("%d%d%d",&a,&b,&c);

        if(a==b&&b==c)
        {
            printf("the triangle is equilateral");
        }
        else if(a==b||b==c||c==a)
        {
            printf("The triangle is Isoscales");
        }
        else
        {
            printf("The triangle is scalene");
        }
        printf("\ndo you want to test for another values(1/0):");
        scanf("%d",&ch);
    }
    while(ch==1);

    return 0;
}