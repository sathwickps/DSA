#include<stdio.h>
#include<stdlib.h>
void push(int*,int);
void pop(int*,int);
void display(int*,int);
int top=-1;
int main()
{
  int *s,n,i,ch;
  printf("\n Enter the value of stack elements");
  scanf("%d",&n);
  s=(int *) malloc(n*sizeof(int));
  while(1)
  {
    printf("\n 1.Push");
    printf("\n 2.Pop");
    printf("\n 3.Display");
    printf("\n 4.Exit");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push(s,n);
              break;
      case 2: pop(s,n);
              break;
      case 3: display(s,n);
              break;
      case 4: exit(0);
              break;
      default: printf("Entered wrong option");
    }
  }
  return 0;
}

void push(int s[],int n)
{
  if(top==(n-1))
  {
    printf("\n Stack Over flow");
    return;  
  }
  printf("Enter the element to be PUSHED");
  scanf("%d",&s[++top]);
  return;
}

void pop(int s[],int)
{
  if(top==-1)
  {
    printf("Stack Underflow");
    return;
  }
  printf("%d Element Deleted",s[top--]);
  return;
}

void display(int s[],int)
{
  int i;
  if(top==-1)
  {
    printf("Stack Underflow");
    return;
  }
  printf("Elements In the stack are/is  ");
  for(i=top;i>-1;i--)
  printf("%d ",s[i]);
  return;
}

  
