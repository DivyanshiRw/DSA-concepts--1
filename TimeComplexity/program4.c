//Find the complexity of the following code which tests whether a give number is prime or not?

int isPrime(int n){
 if (n == 1){                               // --|
 return 0;                                  // --| k1
 }                                          // --|

 for (int i = 2; i * i < n; i++) {
 if (n % i == 0)                           // --| k2
 return 0;                                 // --|
 }
 return 1;
}


/*
 i2=(n-1)
 i=2
 i=3......
 ...i=\/n  (root n)

 ---> O(\/n)
*/