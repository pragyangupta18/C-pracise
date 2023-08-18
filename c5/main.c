//area of rectangle by giving input


// #include<stdio.h>
// int main (){
// int length=2, breadth=4 ;
// int area = length*breadth ;
// printf ("area of rectangle is %d",area );
// return 0 ;
// }


// not to do it's wrong
//#include<stdio.h>
//int main (){
//    int length,breadth;
//    int area=length*breadth ;
//    printf("length of rectangle \n");
//    scanf("%d", &length);
//    printf(" breadth of rectangle \n");
//    scanf("%d", &breadth);
//    printf("area of rectangle is %d\n",area);
//    return 0;
//}


// area by taking input
#include<stdio.h>
int main (){
    int length,breadth;
    printf("length of rectangle \n");
    scanf("%d", &length);
    printf(" breadth of rectangle \n");
    scanf("%d", &breadth);
    printf("area of rectangle is %d\n",length*breadth);
    return 0;
}
