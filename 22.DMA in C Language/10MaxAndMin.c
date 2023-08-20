#include<stdio.h>
#include<stdlib.h>
int main() {
int*a,i,size,max,min,j;
printf("Enter the size: ");
scanf("%d",&size);
a=(int*)calloc(size,sizeof(int));
printf("Enter the values\n");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
max=min=*(a+0);
for(i=1;i<size;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
    if(min>a[i])
    {
        min=a[i];
    }
}
printf("Maximum value is %d\nMinimum value is %d",max,min);
free(a);
return 0;
}