#include<stdio.h>

void main()
{
    int a,b,c,x,y,z,ch,conf,choice;

    do
    {
        printf("On which basis you want to check type of triangle\n1.Side\n2.Angle\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Enter three sides of triangle:\n");
            scanf("%d%d%d",&a,&b,&c);
            x=a*a;
            y=b*b;
            z=c*c;
            if(a==b&&b==c)
            {
                printf("triangle is equilateral and acute angled");
            }

            else if(a==b||b==c||a==c)
            {
                if(x==y+z||y==x+z||z==x+y)
                {
                    printf("Triangle is isosceles and right angled");
                }

                else if(x<y+z||y<x+z||z<x+y)
                {
                    printf("Triangle is isosceles and acute angled");
                }

                else
                {
                    printf("Triangle is isosceles and obtuse");
                }
            }

            else
            {
                if(x==y+z||y==x+z||z==x+y)
                {
                    printf("Triangle is scalene and right angled");
                }

                else if(x<y+z||y<x+z||z<x+y)
                {
                    printf("Triangle is scalene and acute angled");
                }

                else
                {
                    printf("Triangle is scalene and obtuse");
                }

            }

            break;

        case 2:

            printf("Enter three angles of triangle:\n");
            scanf("%d%d%d",&a,&b,&c);

            conf=a+b+c;
            if(conf==180)
            {
                if(a==b&&b==c)
                {
                    printf("Triangle is equilateral and acute angled");
                }
                else if(a==b||b==c||a==c)
                {
                    if(a==90||b==90||c==90)
                    {
                        printf("Triangle is isosceles and right angled");
                    }

                    else if(a<90&&b<90&&c<90)
                    {
                        printf("Triangle is isosceles and acute angled");
                    }
                    else
                    {
                        printf("Triangle is isosceles and obtuse angled");
                    }
                }
                else
                {
                    if(a==90||b==90||c==90)
                    {
                        printf("Triangle is scalene and right angled");
                    }

                    else if(a<90&&b<90&&c<90)
                    {
                        printf("Triangle is scalene and acute angled");
                    }
                    else
                    {
                        printf("Triangle is scalene and obtuse angled");


                    }
                }

            }

            else
            {
                printf("Invalid angles");
            }
            break;

        }
        printf("\nDo you want to check again(1/0):");
        scanf("%d",&choice);

    }

    while(choice==1);
}