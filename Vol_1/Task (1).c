
#include <stdio.h>

int main() {
       int a, i, b = 1;

      printf("Enter a number: ");
          scanf("%d", &a);

     for (i = 1; i <= a; i++) {
           b *= i;
     }

          printf("Factorial of %d is %d", a, b);

       return 0;
}
