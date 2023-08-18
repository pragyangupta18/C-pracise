// practise set -

// program to find avg of 3 numbers - 
//#include<stdio.h>
//
//float average(int a , int b , int c);
//
//int main(){
//    int a ;
//    int b ;
//    int c ;
//    printf("Enter the first number\n");
//    scanf("%d",&a) ;
//    printf("Enter the second number\n");
//    scanf("%d",&b) ;
//    printf("Enter the third number\n");
//    scanf("%d",&c) ;
//    printf("Avg of the number's is %f",  average(a,b,c) );
//
//    return 0 ;
//}
//
//
//float average(int a , int b , int c ){
//    float result ;
//    result = (float)(a+b+c)/2 ;
//    return result;
//}
//





////  Normal Program to convert celcius to Fahrenheit  -
//float conversion (float c);
//
//#include<stdio.h>
//int main (){
//    float c;
//    float f ;
//    printf("Enter the temperature in celcius ") ;
//    scanf("%f",&c);
//    f = ((c * (1.8)) + 32) ;
//    printf("The temperature in faherenheit is %f\n", f) ;
//    return 0 ;
//}

// //  Program to convert celcius to Fahrenheit  -
//float conversion(float c);
//#include<stdio.h>
//int main(){
//    float c ;
//    printf("Enter the temperature in celcius ") ;
//    scanf("%f",&c);
//    printf("The temperature in faherenheit is %f\n",conversion(c)) ;
//    return 0 ;
//}
//
//float conversion(float c){
//    float f ;
//    f = ((c * (1.8)) + 32) ;
//    return f;
//}






//// function to calculate force of attraction on a body of mass m exerted by the Earth.
//#include<stdio.h>
//float force (float mass);
//int main(){
//    float m ;
//    printf("Enter the value of mass ");
//    scanf ("%f",&m);
//    printf("The value of force in newton is %.2f\n",force(m));    // .2 is used for 2 decimal places to come
//    return 0;
//}
//
//float force(float mass){
//    float result ;
//    result = mass * 9.8;
//    return result ;
//}


//// write a program using recursion to calculate nth element of fibonacci series . // 0 , 1 ,1 ,2 , 3 , 5 , 8  , 13 , 21, 34
/// logic    -      fib(n)= fib(n-1) + fib (n-2)
///      -    fib(1)= 0
///      -    fib(2)= 1
//int fibonacci(int n);
//#include<stdio.h>
//int main(){
//    int n , result ;
//    printf("Enter term to find: ");
//    scanf("%d", &n);
//    result = fibonacci(n);
//    printf("The fibonacci term is: %d\n", result);
//    return 0;
//}
//
//int fibonacci (int n){
//    int a = 0 , b = 1 , c ;
//    for (int i = 1 ; i < n ; i ++ ){
//        c= a + b;
//        a = b ;
//        b = c ;
//    }
//    return a;
//
//}



// Display fibonacci series upto nth term -
//void fibonacci(int n);
//#include<stdio.h>
//int main(){
//    int term ;
//    printf("Enter the term: ");
//    scanf("%d", &term);
//    printf("The fibonacci series is :\n");
//    fibonacci(term);
//    return 0 ;
//}
//void fibonacci(int n){
//    int a= 0, b = 1 , c ;
//    for (int i = 0 ; i < n ; i ++){
//        printf("%d\t",a);              //   \t - is used to give gap      ,   \n - use to go to next line
//        c = a + b;
//        a = b;
//        b = c;
//    }
//}

//compiler gives right to left output -
//#include <stdio.h>
//int main(){
//    int a = 3 ;
//    printf("%d %d %d\t", a , ++a , a++ );
//    // output should be 3,4,4 as human but computer will see from right to left & it will give 5 ,5 ,3 in compilers  .
//    // mac compiler is giving 3 , 4  , 4 which is correct
//    return 0 ;
//}


// recursive function to calculate the sum of first n natural numbers
//#include <stdio.h>
//int addNum(int n);
//int main() {
//  int num;
//  printf("Enter a positive integer: ");
//  scanf("%d", &num);
//  printf("Sum = %d\n", addNum(num));
//  return 0;
//}
//int addNum(int n) {
//  if (n != 0)
//    return n + addNum(n - 1);
//  else
//    return n;
//}




// Program to print the pattern -
//*
//***
//*****
void printpattern(int n);
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the no. of lines in which u wanted pattern to be printed ");
    scanf("%d",&n);
    printpattern(n);
    return 0;
}

void printpattern(int n){
    if(n == 1 ){
        printf("*\n") ;
        return ;
    }
        printpattern(n-1);
        for(int i = 0 ; i < (2*n - 1) ; i ++ ){             // (2n - 1 ) is used for odd condition's  .
            printf("*") ;
        }
        printf("\n") ;
}



