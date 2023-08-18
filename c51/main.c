//Entering elements in arrays and acces it .
#include<stdio.h>
int main (){
    int marks[4] ;
    int *ptr ;
    //ptr = &marks[0] ;
    ptr = marks ;
    for(int i = 0 ; i < 4 ; i ++ ){
        printf("Enter the marks of student %d  : ", i+1 ) ;
        scanf("%d",ptr);
        ptr ++ ;
    }
    
    for(int i = 0 ; i < 4 ; i ++ ){
        printf("The value of marks of  student %d is %d  : \n", i + 1 ,  marks[i]) ;
    }
    
    // now acces from middle is like -
    printf("The marks of 2 nd student is %d \n",marks[1]);
    return 0;
}
    




//// can access value at any ptr and making funct'n for printing array 
//#include<stdio.h>
//
//void printarray( int ptr[] ,int  n );
//
//int main(){
//    int arr[] = {1,34,3,645,23,34,5};
//    printarray(arr, 7);
//    printf("The element on 2nd position is changed to %d\n",arr[2]);
//    return 0;
//}
//
//void printarray(int ptr[] ,int  n){
//    for (int i = 0 ; i < n ; i++){
//        printf("The value of element %d is %d\n" , i + 1, ptr[i]) ;
//    }
//    ptr[2] = 3445; // will be changed in man as it is by refence.
//}
//
