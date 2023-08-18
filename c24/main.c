// switch case control instruction 
#include<stdio.h>
int main(){
    int rating ;
    printf("Enter ypur rating (1 to 5)\n:") ;
    scanf("%d",&rating);
    switch(rating){
        case 1 :
            printf("your rating is 1\n") ;
            break;
        case 2 :
            printf("your rating is 2\n") ;
            break;
        case 3 :
            printf("your rating is 3\n") ;
            break;
        case 4 :
            printf("your rating is 4\n") ;
            break;
        default:
            printf("invalid rating\n") ;
            break;
    }
    
    return 0 ;
}
