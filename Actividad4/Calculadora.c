Calculadora.c
#include <studio.h>
int main:
Print ("Escribe los numeros y la operacion a realizar ")
    float (n1, n2)
    char (operacion)
//ingrese los numeros
printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    printf("Elige una operación (+, -, *, /): ");
    scanf(" %c", &op);  // Espacio antes de %c para evitar errores de lectura

    // Realizar operación según el operador ingresado
    #include <stdio.h>  // Librería estándar para entrada/salida

int main() {
    float num1, num2;  // Variables para los números
    char op;           // Variable para la operación

    // Pedir datos al usuario
    printf("Ingresa el primer número: ");
    scanf("%f", &num1);
    
    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    printf("Elige una operación (+, -, *, /): ");
    scanf(" %c", &op);  // Espacio antes de %c para evitar errores de lectura

    // Usar solo condicionales para realizar la operación
    if (op == '+') {
        printf("Resultado: %.2f\n", num1 + num2);
    } 
    else if (op == '-') {
        printf("Resultado: %.2f\n", num1 - num2);
    } 
    else if (op == '*') {
        printf("Resultado: %.2f\n", num1 * num2);
    } 
    else if (op == '/') {
        if (num2 != 0) {
            printf("Resultado: %.2f\n", num1 / num2);
        } else {
            printf("Error: No se puede dividir por cero.\n");
        }
    } 
    else {
        printf("Operación no válida.\n");
    }

    return 0;
}


