#include<stdio.h>
#include<stdlib.h>
struct Node
{ int data;
struct Node*prev;
struct Node*next;
};
void Display(struct Node *head)
{struct Node*p=head;
    while(p!=NULL)
    {printf("%d\n",p->data);
    p=p->next;}
    p=head;
    printf("Using prev\n");
   while(p->next!=NULL){
    p=p->next;
   }
   
   while (p!=NULL)
   {
    printf("%d\n",p->data);
    p=p->prev;}
   }
   struct Node *insert(struct Node*head,int data,int index)
   {struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
   ptr->data=data;
   struct Node*p=head;
   if(index==0)
   {ptr->prev=NULL;
   ptr->next=p;
   head->prev=ptr;
   return ptr;}
   for(int i=0;i<index-1;i++)
   {p=p->next;}
   ptr->prev=p;
   ptr->next=p->next;
   p->next->prev=ptr;
   p->next=ptr;
   
   return head;
   } 
int main()
{struct Node *n1=(struct Node*)malloc(sizeof(struct Node));
struct Node *n2=(struct Node*)malloc(sizeof(struct Node));
struct Node *n3=(struct Node*)malloc(sizeof(struct Node));
struct Node *n4=(struct Node*)malloc(sizeof(struct Node));
struct Node *n5=(struct Node*)malloc(sizeof(struct Node));
 n1->data=1;
 n1->prev=NULL;
 n1->next=n2;
 n2->data=2;
 n2->prev=n1;
 n2->next=n3;
n3->data=3;
 n3->prev=n2;
 n3->next=n4;
 n4->data=4;
 n4->prev=n3;
 n4->next=n5;
 n5->data=5;
 n5->prev=n4;
 n5->next=NULL;
 Display(n1);
 n1=insert(n1,23,3);
  Display(n1);
 return 0;}