#include <stdio.h>

int sumatoria(int a[], int tam)
{
    int resultado = 0;
    for (int i = 0; i < tam; i++)
    {
        printf("valor de la posición %d: ", i);
        scanf("%d", &a[i]);
        resultado= resultado + a[i];
    }
    return printf("valor final de la sumatoria: %d \n", resultado);
}
int main()
{
    int dimension;
    printf("Tamaño del array: ");
    scanf("%d", &dimension);
    int arreglo[dimension];
    sumatoria(arreglo,dimension);

    return 0;
}
