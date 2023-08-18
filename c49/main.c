// Array input using Loops -

#include <stdio.h>
int main(){
    int i ;
    int marks[5] ;
    for (i = 0 ; i < 5; i++ ){
        printf("Enter the value of marks by the student %d \n", i + 1 );
        scanf("%d",&marks[i]);
    }
    for (i = 0 ; i < 5 ; i ++ ){
        printf("Enter the value of marks for  the student %d is %d\n", i + 1  , marks[i]);
    }
    return 0 ;
}


//#include<stdio.h>
//int main (){
////    int a[] = {33,45,67};
////    printf("The value of a[0] is %d\n",a[0]);
////    printf("The value of a[1] is %d\n",a[1]);
////    printf("The value of a[2] is %d\n",a[2]);
//
//    float a[] = {34,75,37};
//    printf("The value of a[0] is %f\n",a[0]);
//    printf("The value of a[1] is %f\n",a[1]);
//    printf("The value of a[2] is %f\n",a[2]);
//    return 0 ;
//}
