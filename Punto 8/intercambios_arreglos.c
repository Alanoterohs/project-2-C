#include <stdio.h>
#include <assert.h>

void pedirArreglo(int a[], int n_max)  
{
  for (int i = 0; i < n_max; i++)
  {
    printf("ingrese el valor %i: ", i);
    scanf("%d", &a[i] );
  }
}

void imprimeArreglo(int a[],int n_max) {
  printf("Valores del array 'swapeado'= {");
  for (int i = 0; i < n_max; i++) 
  {
    printf("%i,", a[i]);
  }
  printf("} \n");
}

void intercambiar(int a[], int i, int j) {
  int aux1,aux2;

    aux1 = a[i];
    aux2 = a[j];
    a[i] = aux2;
    a[j] = aux1;

}

int main()
{
    int size,i, j;
    printf("Elegir tamaño del array: ");
    scanf("%d", &size);
    int array[size];

    pedirArreglo(array,size);

    printf("Elegir una posición del array(i): ");
    scanf("%d", &i);
    printf("Elegir una posición del array(j): ");
    scanf("%d", &j);

    assert (i < size && j < size);

    intercambiar(array, i, j);
    imprimeArreglo(array,size);
    return 0;
}