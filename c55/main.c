// Strings - 1d charater array in contiguous memory allocation  terminates by a null ('\0') .
//#include <stdio.h>
//int main (){
//    char str[]= {'p','i','h','u','\0'};
//    char strr[]={"pihu"}; // null character added automatically
//    printf("%s\n", str );
//    printf("%s\n", strr );
//return 0 ;
//}

// By loop
//#include <stdio.h>
//int main(){
//    char str[] = "Pihu " ;
////    char str[]= {'p','i','h','u','\0'};
////    char str[] = "Pihu\0" ;
//    char *ptr = str ;
//    while(*ptr!='\0'){
//        printf("%c",*ptr);
//        ptr++ ;
//    }
//    return 0;
//}

// Convient way to print string
//#include <stdio.h>
//int main(){
//    char *ptr = "My name is pragyan" ;
//    printf("%s\n",ptr);
//    return 0;
//}

// input strings
//#include <stdio.h>
//int main(){
//    char s[34];
//    printf("Enter ur name\n");
//    scanf("%s",s);
//    printf("%s\n",s);
//    return 0;
//}

// print string with blank spaces // gets
//#include <stdio.h>
//int main(){
//    char s[34];
//    printf("Enter ur name\n");
//    gets(s);
//    printf("%s\n",s);
//    return 0;
//}

// print string with blank spaces  // puts
//#include <stdio.h>
//int main(){
//    char s[34];
//    printf("Enter ur name\n");
//    gets(s);
//    puts(s);
//    return 0;
//}

//🌟We can define array by two ways
//1. *ptr  = can change the content of array letter
//2. ptr[] = cannot change if once initialized like this .


//function in string.h provided by stl
// strlen() - Tells the length of string excluding the null character.
// strcpy(target,source) - used to copy the content of second string into first string passed to it .
// strcat() - used to concatenate two strings .
// strcmp() - ascii value comparision ; -1 , 0 , 1 .


