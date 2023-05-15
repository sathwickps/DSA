 #include <stdio.h>
 #include<stdlib.h>

struct node 
{
  int info;
  struct node *rlink,*llink;
};
typedef struct node *NODE;
NODE getnode()
{
  return ((struct node*)malloc(sizeof(struct node*)));
}

NODE insert_front(NODE head)
{
  NODE newnode,cur;
  newnode=getnode();
  printf("\n Enter the element ");
  scanf("%d",&newnode->info);
  cur=head->rlink;
  head->rlink=newnode;
  newnode->rlink=cur;
  newnode->llink=head;
    cur->llink=newnode;
  return head;
}

NODE insert_rear(NODE head)
{
  NODE temp,cur;
  temp=getnode();
  printf("\n Enter the element");
  scanf("%d",&temp->info);
  cur=head->llink;
  head->llink=temp;
  temp->llink=cur;
  cur->rlink=temp;
  return head;
}

void display(NODE head)
{
  NODE temp;
  if(head->llink==head)
  {
    printf("\n List is empty");
    return ;
  }
  temp=head->rlink;
  printf("\n List is \n");
  while(temp!=head)
  {
    printf("%d->",temp->info);
    temp=temp->rlink;
  }
  printf("NULL\n");
}

NODE delete_front(NODE head)
{
  NODE cur,next;
  if(head->rlink==head)
  {
    printf("\n List is Empty\n");
    return head;
  }
  cur=head->rlink;
  next=cur->rlink;
  head->rlink=next;
  next->llink=head;
  printf("\n The deleted elment is %d",cur->info);
  free(cur);
  return head;
}

NODE delete_rear(NODE head)
{
  NODE cur,prev;
  if(head->rlink==head)
  {
    printf("\n List Element");
    return head;
  }
  cur=head->llink;
  prev=cur->llink;
  head->llink=prev;
  prev->rlink=head;
  printf("\n The deleted element is %d",cur->info);
  free(cur);
  return head;
}

int main()
{
  int item,ch;
  NODE head=NULL;
  head=getnode();
  head->llink=head;
  head->rlink=head;
  while(1)
  {
    printf("\n 1.Insert Rear");
    printf("\n 2.Delete Front");
    printf("\n 3.Insert Front");
    printf("\n 4.Delete Rear");
    printf("\n 5.Display");
    printf("\n 6.Exit");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: head=insert_rear(head);
              break;
      case 2: head=delete_front(head);
              break;
      case 3: head=insert_front(head);
              break;
      case 4: head=delete_rear(head);
              break;
      case 5: display(head);
              break;
      case 6: exit(0);
              break;
      default: printf("Entered wrong option");
    }
  }
  return 0;
}
    
