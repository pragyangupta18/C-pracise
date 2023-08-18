// calculation of income tax paid by the employ to the government  as per slabs mentioned below .
// income slab -> 2.5 l to 5.0 l       ,      5.0 l to 10.0 l       ,   above 10 l     .
// tax         ->      5%              ,             20%            ,         30%      .
// note that there is nno tax before 2.5 l .

#include<stdio.h>
int main (){
    float tax = 0.0 ;
    float income ;
    printf("enter your income\n");
    scanf("%f",&income);
    
    if (income >= 250000 && income <= 500000  ){
        tax = tax + 0.05*(income-250000);
    }
    if(income >= 500000 && income <= 1000000){
        tax = tax + 0.20*(income-500000);
    }
    if(income >= 1000000) {
        tax = tax + 0.30*(income-1000000);
    }
    
    printf("your net income tax paid by u in this month is %f\n",tax);
     return 0 ;
}
