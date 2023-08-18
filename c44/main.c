// Recursion  -
// function calling itself is known as recursive function .

//factorial(n) = 1*2*3..........*n .
//factorial(n) = factorail(n-1) * n.


#include<stdio.h>
int factorial(int x) ;

int main(){
    int a ;
    printf("Enter the number ");
    scanf("%d",&a);
    printf("The factorial of %d is %d \n", a , factorial(a));
return 0 ;
}

int factorial(int x){
    if (x == 1 || x == 0 ) {
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}

// sometimes a most direct way to solve the problem .
// 
