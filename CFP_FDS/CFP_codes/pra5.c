#include<stdio.h>

int main()
{
int i,j,count=0,flag,count_total=0,choice,ch3;

char string[20],ch;
char vowel[10]={'a','A','e','E','i','I','o','O','u','U'};
int v_in[10]={0,0,0,0,0,0,0,0,0,0};

printf("Enter any string:");
scanf("%s",string);

do
{
printf("Menu:\n1.string size\n2.count vowels\n3.search character\nEnter your choice:");
scanf("%d",&choice);

switch(choice)
{
case 1:

for(i=0;string[i]!='\0';i++)
{
  count++;
}

printf("The size of string is %d",count);

break;

case 2:

for(i=0;string[i]!='\0';i++)
{
  for(j=0;j<10;j++)
  {
   if(string[i]==vowel[j])
   {
    v_in[j]+=1;
    count_total+=1;
   }
  }
}

printf("\nTotal number of vowels =%d",count_total);

for(i=0;i<10;i++)
{
  if(v_in[i]>0)
  {
  printf("\n%c found %d times",vowel[i],v_in[i]);
  }
}
break;

case 3:
flag=0;
printf("Enter character to search :");
scanf("%s",&ch);
printf("%c",ch);
for(i=0;string[i]!='\0';i++)
{
 if(ch==string[i])
 {
 printf("%c found at index %d",ch,i);
 flag=1;
 break;
 }
}
if(flag==0)
{
 printf("%c not found in string!!",ch);
}

break;

}

printf("\nDo you want to go to menu(1/0):");

scanf("%d",&ch3);
}

while(ch3==1);
return 0;
}
    