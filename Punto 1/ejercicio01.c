#include <stdio.h>
#include <assert.h>

void holaHasta(int n) {
  while (n > 0) {
    printf("Hola \n");
    n = n - 1;
  }
    return;
}

int main() {
  int n;
  printf("Veces que se imprimirá 'Hola': ");
  scanf("%d", &n );

  assert(n > 0);

  holaHasta(n);
  
  return 0;
}
