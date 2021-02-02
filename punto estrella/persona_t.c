#include <stdio.h>
#include <assert.h>
typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;


    float peso_promedio(persona_t arr[], unsigned int longitud)
{
    float suma = 0;
    float promedio;
    unsigned int i = 0;
    
    while (i < longitud)
    {
        suma = suma + arr[i].peso;
        i = i + 1;
    }
    
    promedio = suma/longitud;

    return promedio;
}

persona_t personaDeMasEdad(persona_t x, persona_t y)
{
    persona_t max;
    if (x.edad >= y.edad)
    {
        max = x;
    }
    else max = y;

    return max;
}


persona_t persona_de_mayor_edad(persona_t arr[], unsigned int longitud)
{
    persona_t aux = arr[0];
    unsigned int i = 1;
    while (i < longitud)
    {
        aux = personaDeMasEdad(aux, arr[i]);
        i = i + 1;
    }
    return aux;
}


persona_t personaDeMenosAltura(persona_t x, persona_t y)
{

    persona_t min;
    if (x.altura >= y.altura)
    {
        min = x;
    }
    else min = y;

    return min;
}

persona_t persona_de_menor_altura(persona_t arr[], unsigned int longitud)
{
    unsigned int i,j;
    float x= arr[0].altura;
    persona_t w;
    i= 0;
    j= 0;

    while (i<longitud)
    {
        x = personaDeMenosAltura(x, arr[i]);
        i= i+1; 
    }
    while (j > longitud)
    {
        if (arr[j].altura == x)
        {
            w= arr[j];
        }
        j = j+1;
    }
    
    return w; 

}

int main(void) {
persona_t p1 = {"Paola", 21, 1.85, 75};
persona_t p2 = {"Luis", 54, 1.75, 69};
persona_t p3 = {"Julio", 40, 1.70, 80};

unsigned int longitud = 3;

persona_t arr[] = {p1, p2, p3};
printf("El peso promedio es %f\n", peso_promedio(arr, longitud));

persona_t p = persona_de_mayor_edad(arr, longitud);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);

p = persona_de_menor_altura(arr, longitud);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
}
