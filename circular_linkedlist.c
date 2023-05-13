#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int info;
  struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
  return ((struct node*)malloc(sizeof(struct node*)));
}
NODE insert_rear(int item,NODE last)
{
  NODE temp;
  temp=getnode();
  temp->info=item;
  if(last==NULL)
  {
    temp->link=temp;
    return temp;
  }
  temp->link=last->link;
  last->link=temp;
  return temp;
}

NODE delete_front(NODE last)
{
  NODE cur,first;
  if(last==NULL)
  {
    printf("\n Linked list is empty");
    return last;
  }
  if(last->link==last)
  {
    cur=last;
    last=NULL;
    printf("\n The deleted element is %d",cur->info);
    free(cur);
    return last;
  }
  first=last->link;
  last->link=first->link;
  printf("\n The deleted element is %d",first->info);
  free(first);
  return last;
}

void display(NODE last)
{
  NODE temp;
  if(last==NULL)
  {
    printf("\n List is empty");
    return;
  }
  printf("\n The elements of list are\n");
  temp=last->link;
  while(temp!=last)
  {
     printf("%d->",temp->info);
     temp=temp->link;
   }
   printf("%d",temp->info);
}

int main()
{
  int item,ch;
  NODE last=NULL;
  while(1)
  {
    printf("\n 1.Insert Rear");
    printf("\n 2.Delete Front");
    printf("\n 3.Display");
    printf("\n 4.Exit");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\n Enter the item to insert ");
              scanf("%d",&item);
              last=insert_rear(item,last);
              break;
      case 2: last=delete_front(last);
              break;
      case 3: display(last);
              break;
      case 4: exit(0);
              break;
      default: printf("Entered wrong option");
    }
  }
  return 0;
}
  
    
  
