// program to make a grading system .(using switch case )

#include <stdio.h>

int main(){
    int grade ;
    printf("Enter marks of students : ") ;
    scanf("%d",&grade) ;
    switch (grade/10) {
        case 10 :
            printf("Outstanding Performance");
            break;
        case 9 :
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7 :
            printf("Grade C");
            break;
        case 6 :
            printf("Grade D");
            break;
        case 5 :
            printf("Grade E");
            break;
        default :
            printf("student is fail & scored below 50 marks\n") ;
            break;
    }
 
    return 0 ; 
}

