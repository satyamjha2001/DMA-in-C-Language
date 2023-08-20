#include<stdio.h>
#include<stdlib.h>
int main() {
int*a,size,i,max;
printf("Enter the size: ");
scanf("%d",&size);
a=(int*)malloc(size*sizeof(int));
printf("enter the values:\n");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<size;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
printf("Largest Value is %d",max);
free(a);
return 0;
}