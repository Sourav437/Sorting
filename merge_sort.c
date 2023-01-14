#include <stdio.h>
#include<stdlib.h>
int merge(int a[], int start, int mid, int end)
{
    int temp[20];
    int i=start, j=mid+1, k=start;
    while (i<=mid && j<= end)
    {
        if(a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    while (i<=mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j<=end)
    {
       temp[k] = a[j];
        j++;
        k++;
    }
	for(i=start;i<=end;i++)
	{
		a[i]=temp[i];
	}
}

int merge_sort(int a[],int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(a, start, mid);
        merge_sort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}
int main()
{
   int i,n,a[] = {12,3,45,6,43,2,17,23,14,54,87,35,78,98,24};
	n = sizeof(a) / sizeof(a[0]);;
 printf("THe given array:\n");
  for(i=0;i<n;i++)
       printf("%d\t",a[i]);
merge_sort(a,0,n-1);
printf("\nThe sorted array becomes:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
