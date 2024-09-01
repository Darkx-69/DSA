#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
struct Node* generate(struct Node*ptr )
{struct Node*new=(struct Node*)malloc(sizeof(struct Node*));
new->data=78;
ptr->next=new;
new->next=NULL;
return new;} 
void display(struct Node*ptr)
{while(ptr!=NULL)
{printf("%d\n",ptr->data);
ptr=ptr->next;}}
int main(int argc, char const *argv[])
{
    struct Node*head;
    head=(struct Node*)malloc (sizeof(struct Node*));
    head->data=7;
    generate(head);
    display(head);


    return 0;
}
