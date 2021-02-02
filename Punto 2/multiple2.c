#include "stdio.h"

int main() {
  int x,y,z,xAux,yAux;
  printf("Toma valor x: ");
  scanf("%d", &x );
  printf("Toma valor y: ");
  scanf("%d", &y );
  printf("Toma valor z: ");
  scanf("%d", &z );


  xAux = x;
  yAux = y;

  x = y;
  y = y + xAux + z;
  z = yAux + xAux;

  printf("Retorna valor x: %d \n", x);
  printf("Retorna valor y: %d \n", y);
  printf("Retorna valor z: %d \n", z);


  return 0;
}

// {Pre: x = X, y = Y, z = Z}
// x, y, z := y, y + x + z, y + x
// {Post: x = Y, y = Y + X + Z, z = Y + X}
