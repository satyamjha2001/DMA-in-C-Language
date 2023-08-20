#include<stdio.h>
#include<stdlib.h>
int main() {
int* ptr,size=0,i;
float sum=0;
printf("Enter the size\n");
scanf("%d",&size);
ptr=(int*)calloc(size,sizeof(int));
if(ptr == NULL)
{
    printf("Memory Allocation Failed \n");
    return 0;
}
printf("\nThe entered %d values\n",size);
for(i=0;i<size;i++)
{
    scanf("%d",&ptr[i]);
}
for(i=0;i<size;i++)
{
    sum+=ptr[i];
}
printf("Average is %.2f\n",sum/size);
free(ptr);
return 0;
}