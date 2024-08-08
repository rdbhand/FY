#include<stdio.h>

struct student
{
int roll_no;
long int mob;
char name[20];
char div;

};
void main()
{
int n,i;
printf("Enter number of student:");
scanf("%d",&n);

struct student s[n];

for(i=0;i<n;i++)
{
printf("\nEnter rollno:");
scanf("%d",&s[i].roll_no);
printf("\nEnter mobile number:");
scanf("%ld",&s[i].mob);
printf("\nEnter name:");
scanf("%s",s[i].name);
printf("\nEnter div:");
scanf("%c",s[i].div);

}

printf("\nDisplaying database:");

printf("\nRoll no\tmob no\tName\tDiv");
for(i=0;i<n;i++)
{
printf("\n%d\t\t%ld\t%s\t%c",s[i].roll_no,s[i].mob,s[i].name,s[i].div);
}



}