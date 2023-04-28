#include <stdio.h>
int main()
{
	int a[10],n,i,min,max;
	printf("Enter Size of Array  ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i])
            {
              max=a[i];
            }
            if(min>a[i])
            {
              min=a[i];
            }
        }
        printf("Max in Array=%d\nMin in Array=%d\n",max,min);
        return 0;
}
