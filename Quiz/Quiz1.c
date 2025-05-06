#include <stdio.h>

int main()
{
float nota = 0;
float suma = 0;
int contador = 0;
while (1)  //Ingrese el valor de while
{
    printf ("Ingresar las calificaciones: ");
    scanf("%f", &nota); // leer datos de entrada 
    if (nota ==-1)
    break;
    
    if (nota >= 0 && nota <= 5) // ingrese el && 
        {
            suma = suma + nota; 
            contador++; 
        }
        else
        {
            printf("Nota invalida. Debe estar entre 0 y 5.\n"); // ingresar el nuevo printf
        }
    }
if (contador > 0)
printf("El promedio es: %f ", suma/contador); //ingrese %f
else 
printf ("Nota invalida");


    return 0;