#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a, size, i, sum = 0;
    printf("Enter the size: ");
    scanf("%d", &size);
    a = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < size; i++)
        sum += a[i];
    printf("Sum of all the numbers is: %d", sum);
    free(a);
    return 0;
}