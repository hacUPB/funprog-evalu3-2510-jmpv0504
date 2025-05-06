/* Crea una funcion que recibe tres números y el puntero a una variable llamada promedio.
La funcion calcula el promedio de los tres numeros y escribe el resultado utilizando el puntero.
El promedio se imprime en la funcion principal. */

#include <stdio.h>
void calcula_prom(float a , float b , float c, float *);
int main(int argc, char const *argv[])
{
    float num1 , num2, num3, prom;
    printf("ingrese dato1: \n");
    scanf ("%f", &num1);
    printf("ingrese dato 2: \n");
    scanf("%f", &num2);
    printf("ingrese dato 3: \n");
    scanf("%f", & num3);
    
    promedio(num1, num2, num3, &prom);
    printf("promedio = %f\n", prom);
    return 0;
}
    void calcula_prom(float a , float b , float c, float *prom);
        (*prom) = (a+ b + c) / 3.0;
        
}