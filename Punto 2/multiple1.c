#include "stdio.h"

int main() {
  int x,y,xAux;
  printf("Toma valor x: ");
  scanf("%d", &x );
  printf("Toma valor y: ");
  scanf("%d", &y );

  xAux = x;

  x = x + 1;
  y = xAux + y;

  printf("Retorna valor x: %d \n", x);
  printf("Retorna valor y: %d \n", y);

  return 0;
}


// {Pre: x = X, y = Y}
// x, y := x + 1, x + y
// {Post: x = X + 1, y = X + Y}
