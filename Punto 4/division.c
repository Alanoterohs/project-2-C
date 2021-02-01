#include <stdio.h>
#include <assert.h>

struct div_t 
{
    int cociente;
    int resto;
};

struct div_t division(int x , int y) 
{
    struct div_t div1;

    div1.cociente = x/y;
    div1.resto = x%y;
    return div1;
}

int main()
{
    struct div_t div1;
    int x,y;
    printf("Ingrese un valor para x (dividendo): ");
    scanf("%d", &x);
    printf("Ingrese un valor para y (divisor): ");
    scanf("%d", &y);

    assert(y>0);

    div1 = division(x,y);
    printf("El cociente es: %d \n", div1.cociente);
    printf("El resto es: %d \n", div1.resto);
    
}

