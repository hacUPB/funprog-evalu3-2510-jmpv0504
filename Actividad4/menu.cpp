menu.c
int main (int argc, char const "argv[])
{
    int opciones; 
    prisnt ("l sopa\n2, pasta\n3 carne\n4 vegetariano\n")
    print ("Elija una opcion: \n");
    scanft("%d" , &opciones);

    //utilizamos el condicional multiple swith 
switch (opciones)
{
case 1:
    printf("Elije sopa: $10000\n");
    break
case 2:
    printf("Eligio sopa: $15000\n");
    break
case 3: 
    printf("Eligio carne: $25000\n");
    break
case 4:
    printf("Eligio menu vegetariano: 20000\n);
    break
Default:  