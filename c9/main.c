
//simple interst calculation

//#include<stdio.h>
//int main (){
//    float amount , principle_amount , annual_interest_rate,time  ;
//    printf("principle  amount is  \n");
//    scanf("%f",&principle_amount);
//    printf("annual interest rate is \n ");
//    scanf("%f",&annual_interest_rate);
//    printf("time in years\n");
//    scanf("%f",&time);
//    amount= (principle_amount*annual_interest_rate*time)/100 ;
//    printf("simple interest amount is %f\n", amount);
//    return 0 ;
//}

#include<stdio.h>
int main (){
    float amount , principle_amount , annual_interest_rate,time  ;
    printf("principle  amount is  \n");
    scanf("%f",&principle_amount);
    printf("annual interest rate is \n ");
    scanf("%f",&annual_interest_rate);
    printf("time in years\n");
    scanf("%f",&time);
    printf("simple interest amount is %f\n", (principle_amount*annual_interest_rate*time)/100);
    return 0 ;
}
