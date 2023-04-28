#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0) 
    {
      return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int a,b,hcf,lcm,temp;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    hcf=gcd(a,b);
    lcm=(a*b)/hcf;
    printf("The GCD is:%d\nThe LCM is:%d\n",hcf,lcm);
    return 0;
}

