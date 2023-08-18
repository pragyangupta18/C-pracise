// program to write if a student is pass or fail . (individual subject cut should be 33% ) ; (overall should be 40%)
#include <stdio.h>

int main(){
    int maths ;
    int chemestry ;
    int physics ;
    float total;
    printf("Enter the percent of student in maths\n");
    scanf("%d",&maths);
    printf("Enter the percent of student in chemestry\n");
    scanf("%d",&chemestry);
    printf("Enter the precent of student in physics\n");
    scanf("%d",&physics);
    
    total = (physics + chemestry + maths)/3 ;
    
    if((total<40) || physics<33 || chemestry<33 || physics<33){
        printf("Your total percent is %f and you are failed\n",total) ;
    }
    else{
        printf("Your total percent is %f and you are passed\n",total) ;
    }
    
    return 0;
}
