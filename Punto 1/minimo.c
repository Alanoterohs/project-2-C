#include <stdio.h>

int main() {
  int x,y;
  printf("Toma valor x: ");
  scanf("%d", &x );
  printf("Toma valor y: ");
  scanf("%d", &y );

  if (x > y) {
    printf("El minimo es y: %d\n", y);
  } else {
    printf("El minimo es x: %d\n", x);
  }
  return 0;
}