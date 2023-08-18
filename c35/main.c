// Do while loop
//do{
//code
//code
//}while(condition);
// uses in game at yes or no after playing the game , first time the game will run but after playing once it wll ask if want to play yes or no .    - application of do while

//#include<stdio.h>
//int main (){
//    int i = 0 ;
//
//    do{
//        printf("The value of i is %d\n",i);
//        i++;
//    }while(i>10);   // will execute once surely
//    // while(i<10);
//    return 0;
//}

// Program to write first n natural numbers
#include<stdio.h>
int main (){
    int i = 0 ;
    int n ;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do{
        printf("The value of first n natural number is %d\n", i+1); // i+1 as i is starting from 0 
        i++;
    }while(i<n);
 
    return 0;
}
