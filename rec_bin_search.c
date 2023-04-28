#include <stdio.h>
int binarysearch(int [],int,int,int);
int main()
{
    int a[20],n,key,i,flag=-1;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements in ascending order:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&key);
    flag=binarysearch(a,0,n,key);
    if(flag==0)
        printf("Element found\n");
    else
        printf("Element not found\n");
    return 0;
}
int binarysearch(int a[],int low,int high,int key)
{
    int mid;
    mid=(low+high)/2;
    if(low>high) return -1;
    else if (a[mid]==key) return 0;
    else if (key>a[mid]) return binarysearch(a,mid+1,high,key);
    else if(key<a[mid]) return binarysearch(a,low,mid-1,key);
}
