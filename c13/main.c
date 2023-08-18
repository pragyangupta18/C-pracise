// Arthmatic operator
#include <stdio.h>
#include<math.h>
int main(){
    int a = 4 ;
    int b = 8 ;
    printf("The value of a + b is %d\n",a + b) ;
    printf("The value of a - b is %d\n",a - b) ;
    printf("The value of a * b is %d\n",a * b) ;
    printf("The value of a / b is %d\n",a / b) ;
    
    
    int z ;
    z = b * a ;
    printf("value of z is %d\n",z);
    
    
    printf("5 divided by 2 leaves a remainder %d \n",5 % 2);
    printf("-5 divided by 2 leaves a remainder %d \n",-5 % 2);
    printf("5 divided by -2 leaves a remainder %d \n",5 % -2); // special case as modulus always take sighn of numerator .
    
    
    printf("the value of 4 to the power 5 is %f \n",pow(4,5));
    // have to write percentage operator %f  as pow() gives real number as result value .
    
    return 0;
}


// no exponentiation operator is present in c .

// operators are +,-,*,/
// operands are the int/ float etc ..... that uses operators
// no operator is assumed is present.


// int+float= float ; float+float=float ; int+int=int .


// '=' is an assignment operator so
  // we can write  int z = a + b(right)
  // but can't write a + b = z (wrong)


// if int a = 3.5 means a = 3 .





