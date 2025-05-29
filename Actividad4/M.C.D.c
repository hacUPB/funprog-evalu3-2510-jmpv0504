#include <stdio.h>
//prototipo función suma 
int mcd(int, int);
int main() {
    int numerador, denominador, maximo;
    printf("Ingrese el numerador:\n");
    scanf("%d",&numerador);
    printf("ingrese el denominador:\n");
    scanf("%d", &denominador);
    //llamada a la funcion 
    maximo = mcd(numerador, denominador);
    printf ("M.C.D = %d\n", maximo);
    return 0;
}
//definiciones de las funcion 
int mcd (int num1, int num2){
    int mayor, menor, comun;
   if (num1 >= num2 )
   {
       mayor = num1;
       menor = num2;
   }
   else
   {
       mayor = num2;
       menor = num1;
   }
    while (menor >= 1)
    {
        if(num1%menor == 0 && num2%menor == 0){
            comun = menor ;
    }
        menor --;
    }
    return comun;
}