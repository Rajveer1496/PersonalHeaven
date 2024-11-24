#include <stdio.h>

// Name :  Rajveer Chaudhari
//Roll no: 202411024

int main(){
    int a ,b ,c;
	printf("Enter Value of Two Numbers\n");
	scanf("%d %d",&a,&b);

    // Arithmetic operators
    printf("Arithmetic Operators:\n");
    printf("sum = %d\n", a + b);  
    printf("Subtraction = %d\n", a - b);  
    printf("Multiplication  = %d\n", a * b);  
    printf("Division = %d\n", a / b);  
    printf("Modulo Division = %d\n", a % b);  

    // Logical operators
    printf("\nLogical Operators:\n");
    printf("(a > b) && (a < 20) = %d\n", (a > b) && (a < 20));  // Logical AND
    printf("(a > b) || (b < 2) = %d\n", (a > b) || (b < 2));    // Logical OR
    printf("!(a == b) = %d\n", !(a == b));  // Logical NOT

   // Relational operators
    printf("\nRelational Operators:\n");
    printf("a == b = %d\n", a == b);   
   printf("a != b = %d\n", a != b);  
    printf("a > b = %d\n", a > b);   
    printf("a < b = %d\n", a < b);   
    printf("a >= b = %d\n", a >= b);  
   printf("a <= b = %d\n", a <= b);  
  // Assignment operators
    printf("\nAssignment Operators:\n");
    c = a;  
    printf("c = a: c = %d\n", c);
    c += b;  
    printf("c += b: c = %d\n", c);
    c -= b;  
    printf("c -= b: c = %d\n", c);
    c *= b;  
    printf("c *= b: c = %d\n", c);
    c /= b;  
    printf("c /= b: c = %d\n", c);


    // Bitwise operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b);  // Bitwise AND
    printf("a | b = %d\n", a | b);  // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);  // Bitwise XOR
    printf("~a = %d\n", ~a);        // Bitwise NOT
    printf("a << 1 = %d\n", a << 1);  // Left shift
    printf("a >> 1 = %d\n", a >> 1);  // Right shift

 

    return 0;
}

