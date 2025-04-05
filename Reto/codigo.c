#include <stdio.h>

void mostrarMenu()
{
    printf("\nCalculadora de Electricidad\n");
    printf("Selecciona una opción:\n");
    printf("1. Ley de Ohm\n");
    printf("2. Factor de Potencia\n");
    printf("3. Resistencia de un Conductor\n");
    printf("4. Resistencia para LED\n");
    printf("5. Salir\n");
    printf("Opción: ");
}

void leyDeOhm()
{
    int opcion;
    double V, I, R;

    printf("\nLey de Ohm\n");
    printf("¿Qué deseas calcular?\n");
    printf("1. Corriente (I)\n");
    printf("2. Voltaje (V)\n");
    printf("3. Resistencia (R)\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            printf("Voltaje (V): ");
            scanf("%lf", &V);
            printf("Resistencia (Ohm): ");
            scanf("%lf", &R);
            if (R != 0)
                printf("Corriente: %.2f A\n", V / R);
            else
                printf("La resistencia no puede ser cero.\n");
            break;

        case 2:
            printf("Corriente (A): ");
            scanf("%lf", &I);
            printf("Resistencia (Ohm): ");
            scanf("%lf", &R);
            printf("Voltaje: %.2f V\n", I * R);
            break;

        case 3:
            printf("Voltaje (V): ");
            scanf("%lf", &V);
            printf("Corriente (A): ");
            scanf("%lf", &I);
            if (I != 0)
                printf("Resistencia: %.2f Ohm\n", V / I);
            else
                printf("La corriente no puede ser cero.\n");
            break;

        default:
            printf("Opción no válida.\n");
    }
}

void factorPotencia()
{
    double P, S;
    printf("\nCálculo del Factor de Potencia\n");
    printf("Potencia activa (W): ");
    scanf("%lf", &P);
    printf("Potencia aparente (VA): ");
    scanf("%lf", &S);

    if (S != 0)
        printf("Factor de Potencia: %.2f\n", P / S);
    else
        printf("La potencia aparente no puede ser cero.\n");
}

void resistenciaConductor()
{
    double resistividad, longitud, area;
    printf("\nResistencia de un Conductor\n");
    printf("Resistividad del material (Ohm·m): ");
    scanf("%lf", &resistividad);
    printf("Longitud del conductor (m): ");
    scanf("%lf", &longitud);
    printf("Área de la sección (m^2): ");
    scanf("%lf", &area);

    if (area != 0)
        printf("Resistencia: %.4f Ohm\n", (resistividad * longitud) / area);
    else
        printf("El área no puede ser cero.\n");
}

void resistenciaLED()
{
    double V_fuente, V_led, I_led;
    printf("\nResistencia para LED\n");
    printf("Voltaje de la fuente (V): ");
    scanf("%lf", &V_fuente);
    printf("Voltaje del LED (V): ");
    scanf("%lf", &V_led);
    printf("Corriente deseada para el LED (A): ");
    scanf("%lf", &I_led);

    if (I_led != 0)
        printf("Resistencia recomendada: %.2f Ohm\n", (V_fuente - V_led) / I_led);
    else
        printf("La corriente no puede ser cero.\n");
}

int main()
{
    int opcion;
    do
    {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                leyDeOhm();
                break;
            case 2:
                factorPotencia();
                break;
            case 3:
                resistenciaConductor();
                break;
            case 4:
                resistenciaLED();
                break;
            case 5:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Opción incorrecta. Intenta de nuevo.\n");
        }

    } while (opcion != 5);

    return 0;
}
