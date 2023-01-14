#include <stdio.h>
int main()
{
   int i,n,*a,temp,j,k;
   printf("Enter the element of the Array:\n");
   scanf("%d",&n);
   a= (int*)malloc(n * sizeof(int));
   printf("Enter the elements\n");
   for(i=0;i<n;i++)
       scanf("%d",&a[i]);
 printf("array: ");
 for(i=0;i<n;i++)
printf("%d\t",a[i]);
    for(i=1;i<n;i++)
{
   for(j=0;j<=i;j++)
   {
       if(a[i]<a[j])
       {
           temp=a[j];
           a[j]=a[i];
           a[i]=temp;
       }
   }
   printf("\nstep %d:\t",i);
   for(k=0;k<n;k++)
    printf("%d\t",a[k]);

}
printf("\nThe sorted array becomes:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
