#include <stdio.h>
int main()
{
    int i, size;
    printf("Enter the size :");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // arr[i] = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}