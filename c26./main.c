// program to make a grading system .(using if else if )
#include <stdio.h>
int main(){
    int grade ;
    printf("Enter the marks of the student");
    scanf("%d",&grade);
    if (grade==100){;
        printf("Outstanding peformance\n");
    }
    else if(grade>90){;
        printf("You scored A in exam\n");
    }
    else if (grade<90 && grade>80){
        printf("You scored B in exam\n");
    }
    else if ( grade<80 && grade>70){;
        printf("You scored B in exam\n");
    }
    else if ( grade<70 && grade>60){;
        printf("You scored C in exam\n");
    }
    else if ( grade<60 && grade>50){;
        printf("You scored D in exam\n");
    }
    else{
        printf("Student is failed\n");
    }
}
