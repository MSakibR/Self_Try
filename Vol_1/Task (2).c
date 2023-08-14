
#include <stdio.h>

int main() {
        int a, i, b = 0, c = 1, d;

      printf("Enter the number of terms to display: ");
              scanf("%d", &a);

          printf("The Fibonacci series up to %d terms: ", a);

      for (i = 0; i < a; i++) {
       if (i <= 1) {
            d = i;
        } else {
            d = b + c;
               b = c;
            c = d;
         }
          printf("%d ", d);
       }

          return 0;
}
