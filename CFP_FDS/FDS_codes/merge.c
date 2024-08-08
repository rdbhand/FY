#include<stdio.h>
void merge(*a,l,h,mid)
{
 int i=l,j=mid+1,k=l;
 int b[10];
 while(i<=mid && j<=h)
{
 if(a[i]<=a[j])
{
 b[k]=a[i];
 i++;
 k++;
}
 else
 {
  b[k]=a[j];
  j++;
  k++;
 }
}
}
void mergesort(int *a,int l,int h)
{
 int mid=(l+h)/2;
 if(l<h)
 {
 mergesort(*a,l,mid);
 mergesort(*a,mid+1,h);
 }
 else
 {
  merge(*a,l,h,mid);
 }
}
void main()
{
int i,n,a[10];
printf("Enter size of array:");
scanf("%d",&n);

printf("Enter %d elements:\n",n);

for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 int l=0,h=n-1;
 mergesort(&a,l,h);
}

}