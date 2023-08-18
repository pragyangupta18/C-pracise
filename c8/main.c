// celcius to ferenheit
//#include<stdio.h>
//int main (){
//    float celcius , temperature ;
//    printf("enter the value in celcius\n") ;
//    scanf("%f",&celcius);
//    temperature = (celcius * 9/5) + 32  ;
//    printf("temperature in ferenheit is %f",temperature);
//    return 0;
//}

#include<stdio.h>
int main (){
    float celcius , temperature ;
    printf("enter the value in celcius\n") ;
    scanf("%f",&celcius);
    printf("temperature in ferenheit is %f",(celcius * 9/5) + 32 );
    return 0;
}
