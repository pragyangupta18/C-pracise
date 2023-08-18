// In c language every non zero thing is true .


// program if you can drive with two conditions if u are too small or too old to drive ; ( using relational operators  i.e ==,<=,>=,<,>,!= .)
// '=' is used for aasigning values and '==' is used for checking the equality .
#include <stdio.h>
int main(){
    int age ;
    printf("Enter your age");
    scanf("%d",&age);
    if(age<=90){
        if(age>=18){
            printf("you can drive\n");
        }
        else {
            printf("you can't drive cause you are 18 down\n") ;
        }
        return 0;
    }
    else{
        printf("you are too old to drive\n");
    }
    
}
