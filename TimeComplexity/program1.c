//Find the time complexity of the func1 function in the program

#include <stdio.h>
void func1(int array[], int length)
{
 int sum = 0;                            // --| f1=k
 int product = 1;                        // --|

 for (int i = 0; i < length; i++)         // --| 
 {                                        // --| f2=k2n
 sum += array[i];                         // --|
 }                                        // --|

 for (int i = 0; i < length; i++)         // --|
 {                                        // --| f3=k3n
 product *= array[i];                     // --|
 }                                        // --|
}
int main()
{
 int arr[] = {3, 5, 66};
 func1(arr, 3);
 return 0;
}


/* 
------TIME COMPLEXITY-------
T=f1 + f2 + f3
 = k1 + k2n + k3n
 = n(k2 + k3)
 = nk4
 --> O(n)
    O(length)
*/