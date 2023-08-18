// practise set

// create an array of 10 numbers // check if ptr + 2 have adress of 3 rd element of array .

//#include <stdio.h>
//int main(){
//    int arr [10] ;
//    int *ptr ;
//    ptr = &arr[0];
//    for(int i = 0 ; i < 10 ; i ++ ){
//        printf("Enter the number %d\n", i+1);
//        scanf("%d",&arr[0]);
//    }
//
//    printf("ptr + 2 i.e %d stores adress of 3 rd position of array i.e %d\n ", ptr+=2, &arr[2]);
//    return 0 ;

// comparision of array locations - // create an array of 10 numbers // check if ptr + 2 have adress of 3 rd element of array .
//#include<stdio.h>
//int main(){
//    int arr [10];
//    int *ptr ;
//    ptr = &arr[0];
//    ptr += 2 ;
//    if (ptr == &arr[2]){
//        printf("These points are at same location\n");
//    }
//    else{
//            printf("These points are at different location\n");
//        }
//    return 0;
//}


// Array to store table of n number till 100 times  .
//#include<stdio.h>
//int main(){
//    int arr[100] ;
//    int n ;
//    printf("Enter the number\n");
//    scanf("%d",&n);
//    for (int i=0;i < 100 ;i++){
//        printf("Table - %d * %d = %d\n",n,i+1,n *(i+1));
//    }
//    return 0 ;
//}

// reverse array with the help of function .
//void reversearr(int *arr, int n);
//#include<stdio.h>
//int main(){
//    int arr[] = {1,2,3,4,5,6,7} ;
//    reversearr(arr ,7 );
//    for (int i = 0 ; i < 7 ; i ++ ){
//        printf("The value of %d element is %d\n",i , arr[i]);
//    }
//    return 0 ;
//}
//void reversearr(int *arr, int n){
//    int temp ;
//    for (int i = 0 ; i < n/2 ; i ++ ){
//        temp = arr[i];
//        arr[i] = arr[n-i-1];
//        arr[n-i-1] = temp ;
//    }
//}

//// program to count positive & negative integers in array -
//int countpositive(int *arr , int n );
//int countnegative(int *arr , int n) ;
//#include<stdio.h>
//int main(){
//  int arr[] = { 2, 3, 5,- 7, 6, -2, 4, -5 ,6,-8} ;
//  int n ;
//    n = sizeof(arr)/sizeof(arr[0]);
//    //  If you have an array then sizeof(array) returns the number of bytes the array occupies. Since each element can take more than 1 byte of space, you have to divide the result with the size of one element (sizeof(array[0])). This gives you number of elements in the array.
//    countpositive(arr,n);
//    countnegative(arr,n);
//    printf("positive elements in array is %d\n", countpositive(arr,n));
//    printf("negative elements in array is %d\n", countnegative(arr,n));
//    return 0 ;
//}
//int countpositive(int *arr , int n){
//    int count = 0 ;
//    for (int i = 0 ; i < n ; i ++ ){
//        if(arr[i] > 0) {
//        count ++;
//        }
//    }
//    return count  ;
//}
//int countnegative(int *arr , int n){
//    int count = 0 ;
//    for (int i = 0 ; i < n ; i ++ ){
//        if(arr[i] < 0) {
//        count -- ;
//        }
//    }
//    return count  ;
//}

// array of size 3 * 10 containing multiplication tables of number 2 , 7 and  9 respectively .
//void printtable(int *multable ,int  num ,int n );
//#include <stdio.h>
//int main (){
//    int multable[3][10] ;
//    printtable(multable[0], 2, 10);
//    printtable(multable[1], 7, 10);
//    printtable(multable[2], 9, 10);
//return 0 ;
//}
//void printtable(int *multable ,int  num ,int n ){
//    printf("The multiplication table of %d is :\n",num);
//    for(int i = 0 ; i < n ;i++ ){
//        multable[i] = num *(i + 1) ;
//    }
//    for(int i = 0 ; i < n ;i++ ){
//        printf("%d * %d = %d\n",num , i+1 ,multable[i]);
//    }
//    printf("**********************************************\n\n") ;
//}

// array of size m & n where m is number and n is the no. of time table has to be printed .
void printtable(int multable ,int  num ,int n );
#include <stdio.h>
int main (){
    int m = 0 ;
    int n ;
    int *ar ;
    ar = &n ;
    int a;
    int *ae ;
    ae = &a ;
    printf("Enter the number :\n");
    scanf("%d",ar);
    printf("Enter the no. of times u want the table :\n");
    scanf("%d",ae);
    printtable( m , *ar , *ae);
return 0 ;
}
void printtable(int multable ,int  num ,int n ){
    printf("The multiplication table of %d is :\n",num);
    for(int i = 0 ; i < n ;i ++ ){
        multable = num *(i + 1) ;
    }
    for(int i = 0 ; i < n ;i++ ){
        printf("%d * %d = %d\n",num , i+1 ,multable);
    }
    printf("**********************************************\n\n") ;
}

// create a 3d array and print adress in increasing order -
//#include<stdio.h>
//int main (){
//    int arr [2][3][4];
//    for (int i = 0 ; i < 2 ; i ++ ){
//        for (int j = 0 ; j < 3 ; j ++ ){
//            for (int k = 0 ; k < 4 ; k ++ ){
//                printf("The adress of [%d] [%d] [%d] is %u\n", i , j , k , &arr[i][j][k]);
//            }
//        }
//    }
//    return 0 ;
//}
