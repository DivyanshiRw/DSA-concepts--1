#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr2[], int size2, int element2){
    int low, mid, high;
    low = 0;
    high = size2-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr2[mid] == element2){
            return mid;
        }
        if(arr2[mid]<element2){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    //Unsorted array for linear search
    int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size = sizeof(arr)/sizeof(int);
    int element = 23;
    int searchIndex = linearSearch(arr, size, element);
    printf("----Linear Search----\n");
    printf("The element %d of array (arr) was found at index %d \n", element, searchIndex);
 
    // Sorted array for binary search
    int arr2[] = {1,3,5,56,64,73,123,225,444};
    int size2 = sizeof(arr2)/sizeof(int);
    int element2 = 444;
    int searchIndex2 = binarySearch(arr2, size2, element2);
    printf("----Binary Search----\n");
    printf("The element %d of array (arr2) was found at index %d \n", element2, searchIndex2);
    return 0;
}
