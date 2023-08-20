#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
char* ch;
ch=(char*)malloc(20*sizeof(char));
printf("Enter the text: ");
gets(ch);
printf("Your character is: %s",ch);
free(ch);
return 0;
}