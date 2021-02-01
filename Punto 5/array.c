#include <stdio.h>



void pedirArreglo(int a[], int n_max)  {

  for (int i = 0; i < n_max; i++) {
    printf("Valor de la posición %i: ", i);
    scanf("%d", &a[i] );
  }
    
  return;
}

  void imprimeArreglo(int a[],int n_max) {
    printf("Valores del array a[]= {");
    for (int i = 0; i < n_max; i++) {
      printf("%i,", a[i]);
    }
    printf("} \n");
    return;
  }

  int main() {
    int max;
    printf("Tamaño del array: ");
    scanf("%d", &max );
    int arreglo[max];
    pedirArreglo(arreglo,max);
    imprimeArreglo(arreglo,max);

    return 0;
  }