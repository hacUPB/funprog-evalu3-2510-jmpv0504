
#include <stdio.h>

void MostrarMenu ()
{
    
    printf("Bienvenido a la super calculadora\n");
    printf("seleccione una opción\n");
    printf("1. Calcular Ley de Ohm\n");
    printf("2. Calcular Factor de Potencia\n");
    printf("3. Calcular Resistencia de un Conductor\n");
    printf("4. Calcular Valor de la Resistencia para un LED\n");
    printf("5. Salir\n");
    printf("Ingresa el número de la opción deseada: ");
}
//funciones para calcular la ley de ohm 
void calcularLeyDeOhm()
{
    double V, I, R;
    printf("Ley de Ohm\n");
    printf("Ingrese el voltaje (V): ");
    scanf("%lf", &V);
    printf("Ingrese la resistencia (Ohm): ");
    scanf("%lf", &R);
    
    if (R == 0) 
    {
        printf("Error: La resistencia no puede ser cero.\n");
        return;
    }
    I = V / R;
    printf("La corriente es: %.2f A\n", I);
}
// Función para calcular el Factor de Potencia