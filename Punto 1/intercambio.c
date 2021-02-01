#include <stdio.h>

int main() {
  int x,y,z;
  printf("Toma valor x: ");
  scanf("%d", &x );
  printf("Toma valor y: ");
  scanf("%d", &y );

  z = x;
  x = y;
  y = z;

  printf("Valor x: %d \n", x);
  printf("Valor y: %d \n", y);
  printf("Valor z: %d \n", z);


  return 0;
}