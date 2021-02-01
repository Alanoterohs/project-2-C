#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

void pedirArreglo(int a[], int n_max)  
{
  for (int i = 0; i < n_max; i++)
  {
    printf("ingrese el valor %i: ", i);
    scanf("%d", &a[i] );
  }
}

void existe_positivo(int a[], int tam)
{
   bool existe1positivo= true;
    for (int i = 0; i < tam; i++)
    {
        if ( a[i] >= 0)
        {
           printf("existe al menos un positivo \n");
           existe1positivo= false;
           break;
        }
    }
    if (existe1positivo)
    {
        printf("No existe un positivo, o todos son negativos \n");
    }
    
}
void todos_positivos(int a[], int tam) 
{
    bool positivos= true;
    for (int i = 0; i < tam; i++)
    {
        if ( a[i] < 0)
        {
            printf("existe al menos un negativo \n");
            positivos=false;
            break;
        } 
    }
     if(positivos==true)
     {
         printf("Todos son positivos. \n");
     }
    
}

int main() 
{
    int size, choice;
    printf("Asignar un tamaño al array: ");
    scanf("%d", &size);
    int array[size];

    pedirArreglo(array,size);

    printf("elegir cual función quiere utilizar: \n colocar '1' si -existe_positivo \n colocar '2' si -todos_positivos \n");
    printf("respuesta: ");
    scanf("%d", &choice);

    assert(choice == 1 || choice == 2);

    if (choice == 1){existe_positivo(array, size);} 
    if (choice == 2){todos_positivos(array,size);}
    

    return 0;
}