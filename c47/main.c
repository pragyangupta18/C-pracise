//Practise set

// write a program to print the adress of a variable . use the adress to get the value of the variable .
//#include<stdio.h>
//int main(){
//    int a = 5 ;
//    int *ptr ;
//    ptr = &a;
//    printf("The value variable a is %d\n", a);
//    printf("Adressof variable is %u \n",ptr);
//    printf("value of the variable a by adress is %u \n",*ptr);
//    return 0 ;
//}



// write a program having a variable i . print the adress of i . pass the variable to a function and print it's adress . Are these adresses same ? why ?
//void printaddress(int a);
//#include<stdio.h>
//int main (){
//    int i = 4 ;
//    printf("The value variable i is %d\n", i);
//    printaddress(i);   // this is copy .
//    printf("The adress of variable i is %u\n",&i);              // Both i will have different adresses .
//    return 0;
//}
//void printaddress(int a){
//    printf("The value of variable a is %u\n",&a);
//}



// Program to change the value of a variable to 10 times of its current value. Write a function and passs the value by reference.
//void changevalue(int *n){
//    *n = *n * 10 ;
//}
//#include<stdio.h>
//int main(){
//    int n ;
//    printf("Enter the number : ");
//    scanf("%d", &n);
//    changevalue(&n) ;
//    printf("the value of 10 times n is %d\n",n);
//    return 0;
//}

// Program to create sum and avg of two number using pointer's -
void sumavg (int a,int b,int*sum , float *avg );

#include<stdio.h>
int main(){
    int i , j , sum;
    float avg ;
    i = 3;
    j = 6;
    sumavg(i,j,&sum,&avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of average is %f\n",avg);
    return 0;
}
void sumavg (int a , int b , int*sum , float *avg ){
      *sum =  a + b ;
      *avg = (float)(a+b)/2 ;
}


// program to print the value of variable i by using pointer to pointer type of variable .
//#include<stdio.h>
//int main(){
//    int i = 4 ;
//    int *ptr ;
//    ptr = &i ;
//    int **pt;
//    pt = &ptr;
//    printf("Value of i is %d\n", i);
//    printf("Value of ptr is %d\n",ptr);
//    printf("Value of i by pointer is %d\n",*ptr);
//    printf("Value of ptr by pointer is %d\n",*pt);
//    printf("Value of i by pointer to pointer is %d\n",**pt);
//return 0 ;
//}

// Program to change the value of a variable to 10 times of its current value. Write a function bu value .
//int multiply( int a );
//#include<stdio.h>
//int main(){
//    int n ;
//    printf("Enter the number : ");
//    scanf("%d", &n);
//    multiply(n);
//    printf("the value of 10 times n is %d\n",multiply(n));
//    return 0 ;
//}
//int multiply( int a ) {
//    a = 10 * a ;
//    return a;
//}
