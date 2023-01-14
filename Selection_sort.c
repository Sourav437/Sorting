#include<stdio.h>
int main()
{
   int i,n,*a,min,j,temp,index;
   printf("Enter the number of element in the Array:\n");
   scanf("%d",&n);
   a= (int*)malloc(n * sizeof(int));
   printf("Enter the elements\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
 printf("The given array:\n");
 for(i=0;i<n;i++)
printf("%d\t",a[i]);
    for(i=0;i<n;i++)
    {
        min=a[i];
         for(j=i;j<n;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
            index=j;
        }

    }
    if(min!=a[i])
    {
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    }

printf("\nThe sorted array becomes:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
