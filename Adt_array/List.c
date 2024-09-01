#include <stdio.h>
#include <stdlib.h>
struct List
{   int Total_size;
    int Used_size;
    int*ptr;
};
void Createlist(struct List *a,int tsize,int usize)
{//(*a).Total_size=tsize;
//(*a).Used_size=usize;
//(*a).ptr=(int*)malloc(tsize*sizeof(int));
//same thing below
a->Total_size=tsize;
a->Used_size=usize;
a->ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct List*a)
{for(int i=0;i<a->Used_size;i++)
{printf("%d\n",(a->ptr)[i]);}}
void setvalue(struct List*a)
{ int n; 
    printf("enter %d elements",a->Used_size);
    for(int i=0;i<a->Used_size;i++)
   { scanf("%d",&n);
   (a->ptr)[i]=n;
   }}
int main()
{ struct List marks;
    Createlist(&marks,5,3);
    setvalue(&marks);
    show(&marks);
    return 0;
}
