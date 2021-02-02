#include <stdio.h>

struct comp_t 
{
int menores;
int iguales;
int mayores;
};


struct comp_t cuantos(int a[], int tam, int elem)
{
   struct comp_t cuantos1;
  int x = 1;
  int menores = 0;
  int mayores = 0;
  int iguales = 0;
  for (int i = 0; i < tam; i++) {
    printf("Valor de la posición %i: ", i);
    scanf("%d", &a[i] );
    if (elem > a[i]) {
      menores = x + menores;
    } else if (elem < a[i]) {
      mayores = x + mayores;
    } else if (elem == a[i]) {
      iguales = x + iguales;
    }
  }

  cuantos1.menores =  menores;
  cuantos1.iguales = iguales;
  cuantos1.mayores = mayores;
  return cuantos1;
}
int main()
{
    struct comp_t cuantos1;
    int size, elem;
    printf("asignar un tamaño al arreglo: ");
    scanf("%d", &size);
    printf("asignar el elemento o numero 'comparador':  ");
    scanf("%d", &elem);

    int array[size];

    cuantos1 = cuantos(array,size,elem);

    printf("hay %d enteros que son mayores que 'elem'\n", cuantos1.mayores );
    printf("hay %d enteros que son menores que 'elem'\n", cuantos1.menores );
    printf("hay %d entero que es igual que 'elem'\n", cuantos1.iguales );
}