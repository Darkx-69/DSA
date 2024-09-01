#include<stdio.h>
void sort(int*ptr)
{for(int i=0;i<5;i++)
{for(int j=i+1;j<5;j++)
{ int temp;
    if (*(ptr+i)>*(ptr+j))
{  temp=*(ptr+i);
    *(ptr+i)=*(ptr+j);
 *(ptr+j)=temp;
}}
}}
int binary_search(int arr[],int a,int size)
{int low=0;
int high=size-1;
int mid;
while(low<=high)
{mid=(low+high)/2;
    if(arr[mid]==a)
{return mid;}
else  if(arr[mid]<a)
{low=mid+1;}
else{high=mid-1;}}
return -1;}
void display(int*ptr)
{for(int i=0;i<5;i++)
{printf("%d\n",*(ptr+i));}}
int main(int argc, char const *argv[])
{ int arr[]={67,3,66,2,78};
 sort(arr);
    display(arr);
    printf("The element 78 is at index=%d",binary_search(arr,78,5));
    return 0;
}
