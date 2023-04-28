#include <stdio.h>
int main()
{
	int a[10][10],n,i,j,sum=0;
	printf("Enter Size of Square Matrix ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
		scanf("%d",&a[i][j]);
	    }
	}
	 for (i=0;i<n;i++)
         {
            for(j=0;j<n;j++)
	    {
	        if(i==j)
                sum+=a[i][j];
            }
         }
         printf("Sum=%d",sum);
         return 0;
}
