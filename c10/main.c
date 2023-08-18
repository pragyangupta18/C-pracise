// code to swap two numbers
#include<stdio.h>
int main (){
    int x,y;
    char mehul ;
    printf("Enter value of x");
    scanf("%d",&x);
    printf("Enter value of y");
    scanf("%d",&y);
    
    mehul=x;
    x=y;
    y=mehul;
    
    printf("after swapping : x= %d , y= %d\n" , x,y );
    
}
