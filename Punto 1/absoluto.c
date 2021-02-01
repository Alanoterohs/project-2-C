#include <stdio.h>

int main() {
    int abs;

    printf("Toma valor abs: ");
    scanf("%d", &abs );


    if (abs < 0) {
      abs = -abs;
      printf("Valor absoluto: %d \n", abs);
    } else {
      printf("Valor absoluto: %d \n", abs);
    }
  return 0;
}