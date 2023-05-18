#include<stdio.h>
#include<stdlib.h>
int partition(int [],int,int);
void quicksort(int a[],int low,int high)
{
  int s;
  if(low<=high)
  {
    s=partition(a,low,high);
    quicksort(a,low,s-1);
    quicksort(a,s+1,high);
  }
}
int partition(int a[],int low,int high)
{
  int pivot,i,j,temp;
  pivot=a[low];
  i=low+1;
  j=high;
  while(i<=j)
  {
    while(a[i]<=pivot && i<=high)
      i++;
    while(a[j]>pivot)
      j--;
    if(i<=j)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }
   temp=a[j];
   a[j]=a[low];
   a[low]=temp;
   return j;
}
int main()
{
  int i,n,a[20];
  printf("\n Enter the size of element ");
  scanf("%d",&n);
  printf("\n Enter %d elements ",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\n Elements before swap \n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n Elements after sorts is\n");
  quicksort(a,0,n-1);
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n");
 return 0;
}
