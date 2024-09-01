#include<stdio.h>
#include<stdlib.h>
#define max_size 20
struct List
{ int arr[max_size];
 int size;
    
};

void set(struct  List *a)
{ scanf("%d",&(a->size));
    
    for(int i=0;i<(a->size);i++)
{scanf("%d",&(a->arr)[i]);}
;}
void display(struct  List* a)
{ for(int i=0;i<(a->size);i++)
{printf("%d\t",(a->arr)[i]);}
}
int insert(struct  List* a,int index,int no)
{ if(index>=max_size)
 {return -1;}
 
    for (int i = (a->size)-1; i >=index; i--)
{
    (a->arr)[i+1]=(a->arr)[i];
    
}
 a->arr[index]=no;
 a->size++;
 return 1;}
 int del(struct  List* a,int index)
 {if(index>=max_size)
 {return -1;}
 else
 {for(int i=index;i<=(a->size-1);i++)
 {(a->arr)[i]=(a->arr)[i+1];}}
 a->size--;
 return 1;}

int main(int argc, char const *argv[])
{struct List a;
set(&a);
display(&a);
insert(&a,3,17);
    display(&a);
    del(&a,0);
   display(&a);
    return 0;
}
