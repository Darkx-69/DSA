#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *generate(struct Node *ptr)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = 78;
    ptr->next = new;
    new->next = NULL;
    return new;
}
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAfterNode(struct Node *pNode, struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = pNode->next;
    pNode->next = ptr;
    return head;
}


int main(int argc, char const *argv[])
{
    struct Node *head;
    head = (struct Node *)malloc(sizeof(struct Node *));
    head->data = 7;
    generate(head);
    printf("linked list before insertion first node\n");
    display(head);
    printf("linked list after insertion first node\n");
    head = insertAtfirst(head, 28);
    display(head);
    printf("linked list after insertion at any index\n");
    insertAtIndex(head, 44, 3);
    display(head);
    printf("linked list after insertion end node\n");
    insertAtEnd(head, 55);
    display(head);
    return 0;
}
