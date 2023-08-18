// Pointer's  - variable which stores the adrerss of another variable .
// to obtain adress by variable - &     // %u is used to print the adresss .
// to obtain variable by adress - *
// pointer to pointer is denoted by - ** (pointing to the adress of another pointer)



// types of function calls  -
// call by value
//call by reference 




// callby values    - values get copy .

//#include <stdio.h>
//int sum(int a , int b ) ; // function prototype                          // a and b are parameters    - placeholders
//int main(){
//    int result;
//    int a = 4;
//    int b = 5 ;
//    printf("The value of A & B is %d and %d \n" , a , b) ;
//    printf("The value of A + B is %d\n", sum(a,b)) ;
//    printf("The value of A & B after funtion call  is %d and %d \n ", a , b) ;
//    return 0 ;
//}
//
//int sum(int a , int b ){
//    int c ;
//    c = a + b ;
//    b = 3223; // no use to write this as will not change the value of a & b variables in int main,the output will be same.
//    a = 3874;
//    return c ;
//}


//call by reference      //  example-
 
// void wrong_swap(int a , int b );    // by value
void swap(int *a , int *b ) ;       // by reference

#include <stdio.h>
int main(){
    int x = 3 ;
    int y = 4 ;
    printf("The value of X & Y before the swap is %d & %d \n", x , y ) ;
    //wrong_swap(x,y); // will not work as it is called by value .
    swap(&x,&y);    // will work due to call by reference .
    printf("The value of X & Y after the swap is %d & %d \n", x , y ) ;
    
return 0;
}

//void wrong_swap(int a , int b ) {
//    int temp ;
//    temp = a ;
//    a = b ;
//    b = temp ;
//}

void swap(int *a , int *b ){       // by reference
int temp ;
temp = *a ;
*a = *b ;
*b = temp ;
}
