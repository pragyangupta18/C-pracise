// operator precedece in c
//  1. *,/, %       2. +,-       3.=


#include <stdio.h>
int main(){
    int x = 2 , y = 3 ;
    printf("value of 3*x-8*y is %d\n",3*x-8*y);
    // if in  parenthesis then ..
    printf("value of 3*(x-8*y) is %d\n",3*(x-8*y));
    // operator associativity ...
    printf("value of 8*y/3*x is %d\n",8*y/3*x );
    printf("value of (8*y)/(3*x) is %d\n",(8*y)/(3*x) );
    
    return 0;
}


// operator associativity ;   // follow left to right associativity
   //x*y/z  --> (x*y)/z
   //x/y*z  --> (x/y)*z






// control instructuions
// 1. sequence control instructions.(sequential controlling)
// 2. decision control instructions. (if,else)
// 3. loop control instructions.(while , for , do while)
// 4. case control instructions.

