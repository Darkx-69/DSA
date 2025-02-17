#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int *L1 = (int *)malloc(n1 * sizeof(int));
    int *L2 = (int *)malloc(n2 * sizeof(int));
    for(int i=0;i<n1;i++)
    {
        L1[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        L2[j]=arr[(m+1)+j];
    }
    
   
    int j=0,i=0,k=l;
    while(i<n1&&j<n2)
    {if(L1[i]<=L2[j])
    {
        arr[k]=L1[i];
        i++;
    }
    else {
        arr[k]=L2[j];
        j++;
    }
    k++;
}
while (i<n1)
{arr[k]=L1[i];
    i++;
k++;}
while (j<n2)
{arr[k]=L2[j];
k++;
j++;}
free(L1);
free(L2);
}

void mergesort(int arr[],int l,int r)
{if(l<r)
    { 
    int m=l+(r-l)/2;
 mergesort(arr,l,m);
 mergesort(arr,m+1,r);
 merge(arr,l,m,r);}}

 void printArray(int A[], int size)
 {
     int i;
     for (i = 0; i < size; i++)
         printf("%d ", A[i]);
     printf("\n");
 }

 int main()
 {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("Given array is \n");
    printArray(arr, arr_size);

    mergesort(arr,0,arr_size-1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
 }