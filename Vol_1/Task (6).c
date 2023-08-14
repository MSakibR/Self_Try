#include <stdio.h>

int main() {
    int a, b = 0;
      printf("Enter number: ");
         scanf("%d", &a);

      for (b = 0; a!= 0; a /= 10) {
         b = (b * 10) + (a % 10);
    }

        printf("Reverse number = %d", b);

       return 0;
}
