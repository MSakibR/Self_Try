#include <stdio.h>

int main() {
       int a, b = 0, c, d;

      printf("Enter a number: ");
         scanf("%d", &a);

      c = a;
       while (a != 0) {
         d = a % 10;
        b = b * 10 + d;
          a /= 10;
     }

       if (c == b) {
      printf("%d is a palindrome number\n", c);
     } else {
          printf("%d is not a palindrome number\n", c);
     }

       return 0;
}
