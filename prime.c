#include<stdio.h>
int main()
{
  int a[10],n,flag,i,j;
  printf("Enter the size");
  scanf("%d",&n);
  printf("Elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
    for(j=2;j<a[i];j++)
      {
        flag=0;
        if(a[i]%j==0)
        {
          flag=1;
          break;
        }
      }
      if (flag==0)
        printf("%d",a[i]);
    }
    return 0;
  }
    
