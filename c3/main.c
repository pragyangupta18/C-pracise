//
//  main.c
//  c3
//
//  Created by Pragyan Gupta on 17/11/22.
//

#include <stdio.h>

int main(){
    int a = 4 ;
    //int b = 8.5 ; // it is not recomended
    int B = 4.4 ;
    float b = 8.5;
    char c = 'u';
    int d = 16;
    int e = 14+22;
   
    printf ("value of a is a\n");
    //  printf ("value of a is %d\n"); not to do
    //  printf ("value of a is ",a);not to do
    printf ("value of a is %d\n ",a);
    printf ("value of a is %d %d\n ",a,a);
    printf ("value of b is %f\n",b);
    printf ("value of B is %d\n",B);
    printf ("value of c is %c\n",c);
    printf ("value of sum of int is %d\n",a+d);
    printf ("value of int sum is %d\n",e);
    printf ("value of int and float %f\n",a+b);
    //printf ("value of int and float %d\n",a+b);not to do
    return 0;
}




