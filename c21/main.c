//    && , ||  , !    are 3 logical operator in  c which are read as( and ,or ,not ) , used to provide logic .
// Logical operator  reduces  readability .

// program if you can drive with two conditions if u are too small or too old to drive ; (using logical operator)
#include <stdio.h>
int main(){
    int age ;
    printf("Enter your age");
    scanf("%d",&age);
    if(age<=90 && age>=18){
        printf("you can drive\n");
    }
    else{
        printf("you can't drive\n");
    }
    return 0 ;
    }



// if we want that anyone can drive without age restriction by the help of pass then :
//#include <stdio.h>
//int main(){
//    int age ;
//    int vip = 1 ;
//    printf("Enter your age");                                  //(vip pass allows to pass anyone  )
//    scanf("%d",&age);
//    if((age<=90 && age>=18)  ||  (vip == 1)  ){   //  if we want not to allow vip pass then ,if((age<=90 && age>=18)||(vip == 1))
//        printf("you can drive\n");
//    }
//    else{
//        printf("you can't drive\n");
//    }
//    return 0 ;
//    }



//usage of logical operator:
//(and)
//and 0 are evaluated  as false
//0 and 0 are evaluated  as false
//0 and 1 are evaluated  as false
//1 and 1 are evaluated  as TRUE
//(or)
// 1 or 0 --- 1
// 0 or 1 --- 1
// 1 or 1 --- 1

