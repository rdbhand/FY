#include<stdio.h>

void main()
{
   int i,j,ch,count,choice,flag=0;
   char s[20],a[20],b[20],c[30];
   do
   {
       printf("String oprations:\n1.string length\n2.string copy\n3.String concatination\n4.String Comparison\nEnter your choice:");
       scanf("%d",&ch);
       
       switch(ch)
       {
           case 1:
           printf("Enter string:");
           scanf("%s",s);
           count=0;
           for(i=0;s[i]!='\0';i++)
           {
               count++;
           }
           printf("length of string is %d",count);
           break;
           
           case 2:
           printf("Enter string:");
           scanf("%s",a);
           
           for(i=0;a[i]!='\0';i++)
           {
               b[i]=a[i];
           }
           
           printf("string after copy operation:%s",b);
           break;
           
           case 3:
           printf("Enter 1st string:");
           scanf("%s",a);
           
           printf("Enter 2nd string:");
           scanf("%s",b);
           
           for(i=0;a[i]!='\0';i++)
           {
               c[i]=a[i];
           }
               c[i]=' ';
               i++;
            for(j=0;b[j]!='\0';j++,i++)
            {
                c[i]=b[j];
            }
            
            printf("string after concatenation of 1st and 2nd string:%s",c);
            
            break;
            
            case 4:
            
            printf("Enter 1st string:");
            scanf("%s",a);
            printf("Enter 2nd string:");
            scanf("%s",b);
            
            for(i=0;a[i]!='\0';i++)
            {
                if(a[i]==b[i])
                {
                    flag=1;
                }
                else
                {
                    break;
                }
            }
            
            if(flag==1)
            {
                printf("strings are equal!!");
            }
           
            else
            {
                printf("strings are unequal!!");
            }
            break;
       }
       printf("\nDo you want to continue(0/1):");
       scanf("%d",&choice);
   }
   
   while(choice==1);
    
    
}