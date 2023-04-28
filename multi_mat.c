#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,k,n,m,p,q;
    static int c[10][10];
    
    printf("\nEnter the size of 1st Matrix");
    scanf("%d%d",&n,&m);
    printf("\nEnter elements of 1st Matrix");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    
    printf("\nEnter the size of 2nd Matrix");
    scanf("%d%d",&p,&q);
    printf("\nEnter elements of 2nd Matrix");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    
    if(m==p)
    {
      for(i=0;i<n;i++)
      {
        for(j=0;j<q;j++)
        {
          for(k=0;k<m;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }
      }
      printf("Multiplication of matrix\n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<p;j++)
          printf("%d\t",c[i][j]);
          printf("\n");
      }
    }
    else
      printf("\n Multiplication Not possible");
    return 0;
  }
