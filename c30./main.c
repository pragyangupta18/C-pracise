// program if the year is leap year or not.
//#include <stdio.h>
//int main(){
//    int leap_year ;
//    printf("enter the year\n");
//    scanf("%d",&leap_year);
//    if( leap_year % 4 == 0 ){
//        printf("It is an leap year\n");
//    }
//    else if( leap_year % 400 == 0 ){
//            printf("It is an leap year\n");
//        }
//    else if( leap_year % 400 == 0 ){
//            printf("It is an leap year\n");
//        }
//    else {
//        printf("it is not an leap year\n");
//    }
//    return 0;
//}

                                                        // or
#include<stdio.h>
int main(){
    int leap_year ;
    printf("enter the year\n");
    scanf("%d",&leap_year);
    if( leap_year % 4 == 0  ||   leap_year % 100 == 0  ||  leap_year % 400 == 0 ){
        printf("It is an leap year\n");
    }
    else {
    printf("it is not an leap year\n");
    }
    return 0;
   }
 
