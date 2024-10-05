#include<stdio.h>
#include<stdlib.h>
struct stack{ 
    int size;
    int*arr;
    int top;
};
int Isstackempty(struct stack*ptr)
{if(ptr->top<0)
{return 1;}
}

int Isstackfull(struct stack*ptr)
{if(ptr->top==ptr->size-1)
{return 1;
}}

int  push(struct stack *ptr,int data)
{
    if  (Isstackfull(ptr)==1)
    {printf("stack overflow");}
    else{
    
    ptr->top++; 
    ptr->arr[ptr->top]=data;
    return ptr->arr[ptr->top];
}}
int  pop(struct stack *ptr)
{
    if  (Isstackempty(ptr)==1)
    {printf("stack overflow");}
    else{
int value =ptr->arr[ptr->top];
ptr->top=ptr->top-1;
return value;
    ;
}}
int main(int argc, char const *argv[])
{ struct stack*y;
 y->size=60;
 y->top=-1;
 y->arr=(int*)malloc(y->size*(sizeof(int)));
printf("%d\n",push(y,7));
    printf("%d\n",pop(y));
    return 0;
}
