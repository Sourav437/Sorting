#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int partition(int a[],int lb,int ub)
{
    int pivot=a[lb],start=lb,end=ub;
    while(start<end)
    {
    while(a[start]<=pivot)
        start++;
    while(a[end]>pivot)
        end--;
    if(start<end)
        swap(&a[start],&a[end]);
    }
    swap(&a[lb],&a[end]);
    return end;
}
void quick_sort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quick_sort(a,lb,loc-1);
        quick_sort(a,loc+1,ub);
    }

}
int main()
{
int i,n,a[] = {14,54,87,35,78,98,24};
n = sizeof(a) / sizeof(a[0]);;
printf("THe given array:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
quick_sort(a,0,n-1);
printf("\nThe sorted array becomes:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
