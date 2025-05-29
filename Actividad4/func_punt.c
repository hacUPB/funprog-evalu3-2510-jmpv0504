#include <stdio.h>
#include <math.h>

//funcion que recibe los punteros y realiza operaciones con ellos 
void operacion_punteros(float *, double *);

int main(int argc, char const *argv[])
{
    float cubo;
    double coseno;1
    operacion_punteros(&cubo, &coseno);
    printf("cubo = %f\n", cubo);
    printf("factorial = %f\n", coseno);
    return 0;

}
//Definicion de la función 
void operacion_punteros(float *var1, double *var2)
{
    //En la variable a la que apunta var1 voy a guardar el cubo de un número
    //que ingresa el usuarioy en la variable a la que apunta var2 el factorial 
    double dato 
    printf("Ingesa un dato: \n");
    scanf("%f", &dato);
   (*var1) = pow(dato,3); //Guarda en la variable cubo = dato ^3
   (*var2) = fact(dato); //Guarda en la variable factorial = fact (dato)
}