#include <stdio.h>
int main()
{
	int a[10],n,i,esum=0,osum=0;
	printf("Enter Size of Array  ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			esum+=a[i];
		else
			osum+=a[i];
	}
	printf("\n Even Sum is:%d\n",esum);
	printf("\n Odd Sum is:%d\n",osum);
	return 0;
}
