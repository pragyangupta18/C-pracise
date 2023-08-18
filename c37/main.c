// break and continue statement

// break used to exit the loop irrespective of the loop is true or not .

//#include<stdio.h>
//int main (){
//   int i = 0 ;
//    do{
//        printf("the value of i is %d\n", i ) ;
//        if (i == 4 ){
//            break;
//        }
//        i++;
//    }while(i<10);
//
//return 0 ;
//}


//continue is used to move to the next iteration of the loop .
#include<stdio.h>
int main (){
    int skip = 5 ;
    int i = 0 ;
    while (i<10){
           i++;
            if(i!=skip){
            continue;
            }
            else{
            printf("%d\n",i);
           
            }
    }
    
return 0;
}


// name of variable might not indicate the behaviour of program  according to it's name .

