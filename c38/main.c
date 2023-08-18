// Practise set question's  -


//wtite a program to make multiplication table of a given no. n .
//#include<stdio.h>
//int main(){
//    int n ;
//    int i ;
//    printf("Enter the number ");
//    scanf("%d",&n) ;
//    for(i=0;i<10;i++){
//        printf("The table of n is %d\n",n*(i+1));
//    }
//    return 0;
//}

//program to write multiplication of 10 in reverse order .
//#include <stdio.h>
//int main(){
//    int n ;
//    int i ;
//    printf("Enter the number ");
//    scanf("%d",&n) ;
//    for(i=10 ;i;i-- ){
//        printf("the reverse table is %d\n",n*i);
//    }
//        return 0 ;
//}

//program to write  first n natural number using whil loop
//#include<stdio.h>
//int main (){
//    int i = 0;
//    int n ;
//    printf("Enter the number ");
//    scanf("%d",&n) ;
//    printf("The natural  number's are\n");
//    while(i<n){
//        printf("%d\n",i+1);
//        i++;
//    }
//    return 0;
//}



 
// using 3 loops on similar question -





// 1 ....// problem that can be done using one type of loop can be too done by the other two loops

//program to sum first n natural number using for  loop .
//#include<stdio.h>
//int main (){
//    int i ;
//    int n ;
//    int sum = 0 ;
//    printf("Enter the number ");
//    scanf("%d",&n) ;
//    for(i=0 ; i <= n ; i++ ){
//        sum+=i;
//    }
//    printf("the sum of n natural numbers are %d\n",sum);
//    return 0;
//}


//    2..... //program to sum first n natural number using  while loop .
//#include<stdio.h>
//int main (){
//    int i= 0;
//    int n ;
//    int sum = 0 ;
//    printf("Enter the number ");
//    scanf("%d",&n) ;
//    while(i<=n){
//        sum+=i;
//        i++ ;
//    }
//    printf("the sum of n natural numbers are %d\n",sum);
//    return 0;
//}

// 3...... //program to sum first n natural number using do while loop .
//#include<stdio.h>
//int main (){
//    int i= 0;
//    int n ;
//    int sum = 0 ;
//    printf("Enter the number ");
//    scanf("%d",&n) ;
//    do{
//        sum+=i;
//        i++ ;
//    }while(i<=n);
//    printf("the sum of n natural numbers are %d\n",sum);
//    return 0;
//}


// Factorial of a  given number using the for loop
//#include<stdio.h>
//int main(){
//    int n;
//    int i ;
//    int factorial= 1 ;
//    printf("Enter the number ");
//    scanf("%d",&n);
//    for(i=1; i<=n ; i++){
//        factorial *= i;
//    }
//    printf("factorial of the number %d is %d\n", n ,factorial);
//    return 0 ;
//}



// repeat 8 using while loop
//#include<stdio.h>
//int main(){
//    int i = 8 ;
//    while(i == 8 ){
//        printf("The no. is");
//        printf("%d\n", i);
//    }
//
//    return 0;
//}



// sieves method if we want to get overall about  the big numbers in less time .




// to find using loops weather a number is prime or not by for loop
// prime number  - divide only by 1 or itself .
//#include<stdio.h>
//int main (){
//    int n ;
//    int i ;
//    int prime = 1 ;
//    printf("Enter the number ");
//    scanf("%d",&n);
//    for (i=2;i<n ;i++){
//        if(n%i== 0){
//            prime=0 ;
//            break;
//        }
//    }
//    if (prime == 0 ){
//        printf("The no. is not the prime no.\n");
//    }
//    else{
//        printf("The number is prime\n");
//    }
//    return 0 ;
//}


    
// to find using loops weather a number is prime or not by while loop
#include<stdio.h>
int main (){
    int n ;
    int i= 2 ;
    int prime = 1 ;
    printf("Enter the number ");
    scanf("%d",&n);
    while(i<n){
        if(n%i== 0){
            prime=0 ;
        }
        i++ ;
    }
    if (prime == 0 ){
        printf("The no. is not the prime no.\n");
    }
    else{
        printf("The number is prime\n");
    }
    return 0 ;
}

