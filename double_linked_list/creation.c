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
 return 0;}