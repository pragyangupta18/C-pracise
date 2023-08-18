// two types of function's in c -
// library - eg. printf() , rand()   - already grouped in computer library .
// User defined - defined and declared by the user .

// function - rewrite decrease , readability increase , test and check logic's independently .

// passing values to the function  and getting value in return is the imp point to be remembered .



#include <stdio.h>

int sum(int a , int b ) ; // function prototype                          // a and b are parameters    - placeholders 
 
int main(){
    int result;
    result = sum(2,15);  // function call                                // 2 and 15 are arguments    - actual values
    printf("Result is %d\n", result);
    return 0 ;
}

int sum(int a , int b ){
    int c ;
    c = a + b ;
    return c ;
}



// Misnomer - it meanes giving wrong names to the function's 





//  Program To calculate the side of Square -
//
//#include <stdio.h>
//#include <math.h>
//int main(){
//    double s ;
//    printf("Enter the side length ");
//    scanf("%lf",&s);                                                   // double uses -  %lf
//    printf("The value of area is %f", pow(s,2));                       // pow results in double datatype
//    return 0;
//}
