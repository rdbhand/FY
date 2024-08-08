#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c,d;
    float r1,r2,real,imag;
    printf("enter value of a=");
    scanf("%d",&a);

    printf("enter value of b=");
    scanf("%d",&b);

    printf("enter value of c=");
    scanf("%d",&c);

    d=b*b-4*a*c;
    if(d>0) {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots are real and distinct\nr1=%f\nr2=%f",r1,r2);
    }
    else if(d==0) {
        r1=(-b)/(2*a);
        printf("\nroots are same\nr1=r2=%f",r1);
    }
    else {
        real=(float)-b/(2*a);
        imag=sqrt(-d)/(2*a);
        printf("\nroots are imaginary\nr1=%.2f+%.2fi and r2=%.2f-%.2fi",real,imag,real,imag);
    }
    return 0;
}