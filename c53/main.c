// 2d array to take input from the user by the help of display function .

void display(int num , int numm);
#include <stdio.h>
int main(){
    int num = 2 ;
    int numm = 3 ;
    display(num, numm);
    
return 0 ;
}
void display(int num , int numm ){
    int inp[num][numm] ;
    for(int i = 0 ; i < num ; i ++ ){
        for(int j = 0 ; j < numm ; j ++ ){
            printf("Enter the term %d with %d\n", i + 1 , j + 1 );
            scanf("%d",&inp[i][j]);
        }
    }
    for(int i = 0 ; i < num ; i ++ ){
        for(int j = 0 ; j < numm ; j ++ ){
            printf("The output of %d with  %d is %d\n", i +1 , j + 1, inp[i][j] );
        }
    }
}


