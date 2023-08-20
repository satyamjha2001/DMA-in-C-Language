#include<stdio.h>
int main() {
int*p;
p=(int*)malloc(sizeof(int));
p=NULL;//this is memory leak.
return 0;
}