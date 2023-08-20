#include<stdio.h>
#include<stdlib.h>
int main() {
int*a,i,sum=0,size;
printf("Enter the size: ");
scanf("%d",&size);
a=(int*)malloc(size*sizeof(int));
printf("Enter the elements: \n");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
    sum+=a[i];
}
printf("These are the values you enter:\n");
for(i=0;i<size;i++)
{
    printf("%d ",a[i]);
}
printf("\nSum is %d",sum);
return 0;
}