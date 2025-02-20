//What is the time complexity of the following snippet of code?

//(Actually not checking prime no.)
#include<stdio.h>
int isPrime(int n){
 for (int i = 2; i * i < 10000; i++) {              // --|
 if (n % i == 0)                                    // --| k1   (doesn't depend on n ... so constant)
 return 0;                                          // --|
 }
 return 1;
}
isPrime();


/*
T= k1
 ---> O(1)
*/





