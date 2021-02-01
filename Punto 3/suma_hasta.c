#include <stdio.h>

int suma_hasta(int n) {
  int resultado;
  resultado = 0;
  while (n > 0) {
    resultado = n + resultado;
    n = n - 1;
  }
  return printf("resultado de la sumatoria: %d\n", resultado );
}

int main()
{
    int x;
    printf("Ingrese un valor para n: ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("ERROR: ingrese un valor mayor o igual a 0 \n");
    } else {
    suma_hasta(x);
    }
    return 0;
}

//También podría usar el assert pero no se solicitó.