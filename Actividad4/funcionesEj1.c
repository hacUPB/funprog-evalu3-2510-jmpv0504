#include <stdio.h>
//Prototipo función suma 
int suma(int, int);

int main (int argc, char const *argv[])
{
    int var1, var2, resultado;
    var1 = 300;
    var2 = 150;
    resultado = suma (var1, var2);
    printf("%d + %d =%d \n", var1, var2, resultado);
    
    return 0;
}
//Definicion de la funcion 
int suma (int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}