#include<stdio.h>
#include<stdlib.h>
int main() {
int *p;
{
    int x=4;
    p=&x;
} //Dangling pointer
printf("%d",*p);
return 0;
}
//OR
// int main() {
// int *p;
// p=(int*)malloc(sizeof(int));
// *p=10;
// printf("Before Free %d\n",*p);
// free(p);
// printf("After free %d",*p);//Dangling pointer
// return 0;
// }