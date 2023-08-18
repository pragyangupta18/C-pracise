//  program to know if a character entered is in upper case or lower case .
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the letter\n");
    scanf("%c",&ch);
    if(ch >= 'a'  &&  ch <= 'z'){
        printf("it is lower case letter\n");
    }
    else if(ch >= 'A'  &&  ch <= 'Z'){
        printf("it is upper case letter\n");
    }
    else
        printf("%c is not applicable to alphabatic differentiation in upper and lower case\n",ch);
    return 0;
}


  // ASCII value of letters are  :
  //a=97 , z=122 ,  A=65  ,  Z=90
