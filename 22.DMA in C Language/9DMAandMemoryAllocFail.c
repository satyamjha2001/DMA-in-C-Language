#include<stdio.h>
#include<stdlib.h>
int main() {
int *p;
p=(int*)malloc(sizeof(int));
if(p==NULL)
{
    printf("Memory Allocation Is Failed.");
return 1;
}
return 0;
}