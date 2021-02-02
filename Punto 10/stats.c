#include <stdio.h>
#include <stdbool.h>

struct datos_t {
float maximo;
float minimo;
float promedio;
};

struct datos_t stats(float a[], int tam)
{
    struct datos_t max_min_prom;
    float promedio=0;
    for ( int i = 0; i < tam; i++) {
        printf("Valor de la posición %i: ", i);
        scanf("%f", &a[i] );
        promedio = a[i] + promedio;
        if (i==0)
    {
        max_min_prom.minimo=a[i];
        max_min_prom.maximo=a[i];
    }
    if (max_min_prom.minimo > a[i]) 
    {
      max_min_prom.minimo = a[i];
    } 
    if (max_min_prom.maximo < a[i]) 
    {
      max_min_prom.maximo = a[i];
    } 

  }
    max_min_prom.promedio = promedio/tam;
    return max_min_prom;
}

int main()
{
    struct datos_t max_min_prom;
    int size;
    printf("asignar un tamaño al arreglo: ");
    scanf("%d", &size);

    float array[size];

    max_min_prom = stats(array, size);

    printf("el promedio de los valores del array es: %f \n", max_min_prom.promedio);
    printf("el valor minimo del array es: %f \n", max_min_prom.minimo);
    printf("el valor maximo del array es: %f \n", max_min_prom.maximo);
    return 0;
}
