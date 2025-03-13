int main() 
{
    double a, b;
    char op;
    
    printf("Ingrese una operación en formato (a + b): ");
    scanf("%lf %c %lf", &a, &op, &b);
    
    if (op == '+')
        printf("Resultado: %lf", a + b);
    else if (op == '-')
        printf("Resultado: %lf", a - b);
    else if (op == '*')
        printf("Resultado: %lf", a * b);
    else if (op == '/') {
        if (b != 0)
            printf("Resultado: %lf", a / b);
        else
            printf("Error: División por cero no permitida.");
    } else
        printf("Operación no válida.");
    
    return 0;
}


int main() {
    double a, b;
    char op;
    
    printf("Ingrese una operación en formato (a + b): ");
    scanf("%lf %c %lf", &a, &op, &b);
    
    switch (op) {
        case '+':
            printf("Resultado: %lf", a + b);
            break;
        case '-':
            printf("Resultado: %lf", a - b);
            break;
        case '*':
            printf("Resultado: %lf", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Resultado: %lf", a / b);
            else
                printf("Error: División por cero no es permitida.");
            break;
        default:
            printf("Operación no válida.");
    }
    
    return 0;
}