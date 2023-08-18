//comparison of same string with diff methots of inputs .
//#include <stdio.h>
//#include <string.h>
//int main(){
//    char st1[34];
//    char st2[34];
//    char c = '\0' ;
//    int i = 0 ;
//    printf("Enter the value of first string\n") ;
//    scanf("%s",st1) ;
//    printf("Enter the value of second string character by charaxter\n") ;
//    while (c != '\n'){
//        fflush(stdin) ;
//        scanf("%c",&c) ;
//        st2[i] = c ;
//        i++ ;
//    }
//    st2[i-1]='\0';
//
//    printf("The value of first string is %s\n",st1) ;
//    printf("The value of Second string is %s\n",st2) ;
//    printf("strcmp will written %d\n",strcmp(st1,st2)) ;
//return 0 ;
//}



// string length
//#include <stdio.h>
//int strln(char *st){
//    // char *ptr = st ;
//    char *ptr ;
//    ptr = st ;
//    int len = 0 ;
//    while (*ptr!= '\0') {
//        len++ ;
//        ptr ++ ;
//    }
//    return len ;
//}
//
//int main(){
//    char st [] = "Pragyan" ;
//    int l = strln(st) ;
//    printf("the lenght of string is %d\n", l);
//   // printf("the lenght of string is %d\n", strln(st));
//    return 0;
//}



 
// slice function to print the wanted no. od insex from a string .
#include <stdio.h>
void slice (char *st,int m , int n){
    int i = 0 ;
    while((i + m) < n){
        st[i] = st[i + m] ;
        i ++ ;
    }
    st[i]='\0' ;
}
int main (){
    char st[] = "Pumaragyan" ;
    slice(st,1,4);
    printf("%s\n",st);
    return 0 ;
}


// Fuction strcpy .
//#include <stdio.h>
//char* strcpy(char* destination, const char* source){
//    if (destination == NULL) {
//        return NULL;
//    }
//    char *ptr = destination;
//    while (*source != '\0'){
//        *destination = *source;
//        destination++;
//        source++;
//    }
//    *destination = '\0';
//    return ptr;
//}
//
//int main(void)
//{
//    char source[] = "Pragyan gupta";
//    char destination[25];
//    printf("%c\n",destination[5]);
//    printf("%s\n",strcpy(destination, source));
//    printf("%c\n",destination[5]);
//    printf("%c\n",destination[7]);
//    return 0;
//}


