/*
 C code to find the third side of the triangle(Pythagorean Theorem used).
*/
#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
a = 4;
b = 7;
printf("length of OQ2 = %d\n",a);
printf("length of OP = %d\n",b);
int A,B;
A = a*a;
B = b*b;
c = B-A;
float C;
C = sqrtf(c);
printf("length of PQ2 = %f\n",C);
return 0;
}