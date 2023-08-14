#include <stdio.h>

int main() {
     int x, a, b, c, d, e, f, g, h;

    printf("Input x:");
      scanf("%d", &x);

      a = x / 500;
       x = x % 500;

      b = x / 100;
       x = x % 100;

      c = x / 50;
      x = x % 50;

     d = x / 20;
     x = x % 20;

     e = x / 10;
      x = x % 10;

     f = x / 5;
      x = x % 5;

      g = x / 2;
      x = x % 2;

        h = x;

      printf("Total number of notes:\n");
       printf("500 note: %d\n", a);
      printf("100 note: %d\n", b);
     printf("50 note: %d", c);
       printf("20 note: %d\n", d);
     printf("10 note: %d\n", e);
     printf("5 note: %d\n", f);
     printf("2 note: %d\n", g);
      printf("1 note: %d", h);

      return 0;
}
