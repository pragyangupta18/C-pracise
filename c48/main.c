// Array - collection of similar elements on contiguous memory allocation .
// one variable -  capable to store multiple values .


// By initializing , giving marks directly in array
//#include <stdio.h>
//int main(){
//   // int marks1,marks2,marks3,marks4;
//    // marks 1 = 23;
//    // marks 2 = 34;
//    // marks 3 = 56;
//    // marks 4 = 55;
//    int marks[4] ;
//    marks[0]= 23 ;
//    marks[1]= 34 ;
//    marks[2]= 56 ;
//    marks[3]= 55 ;
//    return 0;
//}

// Array by user input
#include <stdio.h>
int main(){
    int marks[4] ;
    printf("Enter the value of marks by the student 1 \n");
    scanf("%d",&marks[0]);
    printf("Enter the value of marks by the student 2 \n");
    scanf("%d",&marks[1]);
    printf("Enter the value of marks by the student 3 \n");
    scanf("%d",&marks[2]);
    printf("Enter the value of marks by the student 4 \n");
    scanf("%d",&marks[3]);
    
    printf("You have entered %d %d %d %d\n",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}

