#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the number of Rows: ");
      scanf("%d", &x);
    printf("Enter the number of Columns: ");
        scanf("%d", &y);

    int i, j;
    for (i = 1; i <= x; i++) {
      for (j = 1; j <= y; j++) {
       if (i % 2 == 1) {
            printf("1");
       } else {
         printf("0");
        }
        }
        printf("\n");
    }

    return 0;
}
