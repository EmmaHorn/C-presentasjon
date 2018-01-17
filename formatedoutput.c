#include <stdio.h>

//PI is a constant
#define PI 3.14159265359
#define EULER 2.718281828459045

int main(int argc, char** argv) {
   printf("PI with 3 desimals: %.3f\nEULER with 5 desimals: %.5f\n", PI, EULER);
   return 0; 
}
