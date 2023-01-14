#include <stdio.h>
int main()
{
   int i,n,*a,temp,j;
   printf("Enter the number of element in the Array:\n");
   scanf("%d",&n);
   a= (int*)malloc(n * sizeof(int));
   printf("Enter the elements\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
 printf("THe given array:\n");
  for(i=0;i<n;i++)
       printf("%d\t",a[i]);
		for(i=0;i<(n-1);i++)
		{
			for(j=0;j<(n-i-1);j++)
			{
				if (a[j]>a[j+1])
				{
				   temp=a[j];
				   a[j]=a[j+1];
				   a[j+1]=temp;
				}
			}
		}
printf("\nThe sorted array becomes:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
