// loop control structures
// loops are used to repeat the similar part of the code snippet efficiently .
// types of loops - while , do-while , for loop .
 

// while loop syntax  - while(condition is true){
//                      code
//                      }

//#include <stdio.h>
//int main () {
//    int a ;
//    printf("take the output from the user") ;
//    scanf("%d", &a);
//    while(a<10)
//    {
//          printf( "value of a is %d\n", a );
//          a++ ;
//    }
//    return 0;
//}

// program to print a natural number 10 to 20 with initialized looped counter 0
#include<stdio.h>
int main (){
    int i = 0;
    printf("The number's b/w 10 to 20 are\n");
    while(i<=20){
        if (i >= 10)
        printf("%d\n",i);
        i++;
    }
    return 0;
}


// operators
// i++ ; i = i + 1 ; first print then increament
// ++i ; first print then increament
// i-- ; i = i - 1 ;
// += is compound assignment operator
