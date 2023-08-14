
#include <stdio.h>

int main() {
    int a, b = 0;
     printf("Enter a number:");
      scanf("%d", &a);

       for (b = 0; a != 0; b++) {
         a /= 10;
    }

       printf("Total digits: %d", b);

       return 0;
}
