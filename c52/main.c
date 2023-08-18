// Mutidimensional array -
#include <stdio.h>
int main(){
    int numstudents = 3 ;
    int numsubjects = 5 ;
    int marks [3][5] ;
    
    for (int i = 0 ; i<numstudents ; i ++ ){
        for (int j = 0 ; j<numsubjects ; j ++ ){
            printf("Enter the marks of student %d in subject %d\n", i+1 , j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for (int i = 0 ; i<numstudents ; i ++ ){
        for (int j = 0 ; j<numsubjects ; j ++ ){
            printf("The marks of student %d in subject %d is %d\n", i+1 , j+1 , marks[i][j]);
            
            // we can access multidimensional array like this  -
            printf("The marks of student 1 in subject 2 is %d\n",marks[1][2] ) ;
        }
    }
return 0;
}


