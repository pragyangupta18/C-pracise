//decision making instructions in c
//1. if else statement
//2. switch statement



// c program to check wheather a number is even or add .

#include<stdio.h>
int main(){
    int a ;
    printf("enter a number ");
    scanf("%d",&a);
    if(a%2==0){
        printf("the number %d is even \n",a);
    }
    else{
        printf("number %d is odd ",a) ;
        }
    return 0 ;
}
