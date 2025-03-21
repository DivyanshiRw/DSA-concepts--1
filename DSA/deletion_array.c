#include <stdio.h>
 
void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
void indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
}
 
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 2;
    printf("Array Before Deletion:\n");
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    printf("Array After Deletion:\n");
    display(arr, size);
    return 0;
}
