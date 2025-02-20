/*Consider the recursive algorithm , where the random(int n) spends one unit of time to return a 
random integer which is evenly distributed within the range [0,n]. If the average processing time 
is T(n), what is the value of T(6)?*/

#include<stdio.h>
int function(int n)
{
 int i;                              // --| k1=0
 if (n <= 0)
 {
 return 0;
 }
 else
 {
 i = random(n - 1);                        // --| 1
 printf("this\n");                           
 return function(i) + function(n - 1 - i);
 }
}


/*
                    T6 -->1
                   /  \
           <0-- T(0)   T5 -->1
                      /  \
                     T0   T4 -->1
                         /  \ 
                        T0   T3 -->1
                            /  \ 
                           T0   T2 -->1
                               /  \ 
                              T0   T1 -->1
                                  /  \ 
                                 T0   T0

    Answer:  6
*/ 