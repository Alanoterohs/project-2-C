#include <stdio.h>
#include <stdbool.h>


void nesimo_primo(int m)
{
    int contador, n, primo;
      for ( n = 2 ; n <= m ; n++ )
    {
        primo = 1;
        contador = 2;
        while ( contador <= n / 2 && primo )
        {
            if ( n % contador == 0 )
                primo = 0;
            contador++;
        }
        if ( primo )
            printf( "->%d\n", n );
    }
}


int main()
{
    int m;
    printf("ingrese numero: ");
    scanf("%d", &m);

    nesimo_primo(m);
    return 0;
}

