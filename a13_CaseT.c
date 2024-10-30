#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14159

int main()
{
    int opcion;
    //int x,y;
    float baseT,baseTa,alturaT,areaT,ladoT,perimetro,diametro,diamayor,diamenor,radio,lado, area,apotema;
    printf("Este programa las siguientes areas y perimetros en cm2:\n");
    printf("\nElija una opcion:\n1)Triangulo\n2)Cuadrado\n3)Rectangulo\n4)Circulo\n5)Rombo\n6)Pentagono\n7)Hexagono\n8)Trapecio\n9)Patalelogramon\n\nSeleccion: ");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:
        system("cls");  
        printf("\n\n*Triangulo*");
        printf("\nIngresa la base del triagunlo: ");
        scanf("%f",&baseT);
        printf("Ingresa la altura del triangulo: ");
        scanf("%f",&alturaT);
        printf("Ingresa el lado del trangulo: ");
        scanf("%f",&ladoT);
        perimetro= ladoT+ladoT+ladoT;
        areaT=(baseT*alturaT)/2;
        printf("\nEl area del triangulo es: %f",areaT);
        printf("\nEl Perimetro del trangulo es: %f",perimetro);
        break;
    case 2:
        system("cls");
        printf("\n\nMuy bien!\nAhora vamos a calcular el area del cuadrado \n\n*Cuadrado*");
        printf("\nIngresa el lado del cuadrado  en centimetros: ");
        scanf("%f",&lado);
        area=lado*lado;
        printf("\nEl area calculada del cuadrado es: %.2f %c",160,area,253);
        perimetro=lado+lado+lado+lado;
        printf("\nEl perimetro del cuadrado es: %.2f cm",perimetro);
        break;
    case 3:
        system("cls");
        printf("Ingresa la altura del rectangulo: ");
        scanf("%f", &alturaT);
        areaT=(baseT*alturaT);
        perimetro= ((alturaT*2) + (baseT*2));
        printf("\nEl area del rectangulo es: %f",areaT);
        printf("\nEl perimetro del rectangulo es: %f",perimetro);
        break;

    case 4:
        system("cls");
        printf("Ingresa el radio del circulo: ");
        scanf("%f",&radio);
        areaT = PI*pow(radio,2);
        diametro= ((PI*2)*radio);
        printf("\nEl area del circulo es: %f",areaT);
        printf("\nEl diametro del circulo es: %f",diametro);
        break;
    case 5:
        system("cls");
        scanf("%f",&diamenor);
        printf("Ingresa la diagonal menor del rombo ");
        scanf("%f",&diamayor);
        areaT = (diamenor*diamayor)/2;
        diametro= PI*diamayor;
        printf("\nEl area del rombo es: %f",areaT);
        printf("\nEl diametro del rombo es: %f",diametro);
        break;

    case 6:
        system("cls");
        printf("Ingresa el perimetro del pentagono: ");
        scanf("%f",&perimetro);
        printf("Ingresa la diagonal menor ");
        scanf("%f",&diamayor);
        areaT = (diamenor*diamayor)/2;
        diametro= PI*diamayor;
        printf("\nEl area del pentagono es: %f",areaT);
        printf("\nEl diametro del pentagono es: %f",diametro);
        break;

    case 7:
        system("cls");
        printf("Ingresa un lado del Hexagono: ");
        scanf("%f",&lado);
        printf("Ingresa el apotema del Hexagono ");
        scanf("%f",&apotema);
        areaT = ((lado*5)*apotema)/2;
        printf("\nEl area del hexagono es: %f",areaT);
        break;

    case 8:
        system("cls");
        printf("Ingresa la base de arriba del trapecio: ");
        scanf("%f",&baseT);
        printf("Ingresa la base de abajo del trapecio ");
        scanf("%f",&baseTa);
        printf("Ingresa la altura del trapecio ");
        scanf("%f",&alturaT);
        printf("Ingresa un lado del trapecio ");
        scanf("%f",&lado);
        areaT = ((baseT*baseTa)*alturaT)/2;
        perimetro=lado*4;
        printf("\nEl area del trapecio es: %f",areaT);
        printf("\nEl perimetro del trapecio es: %f", perimetro);
        break;
    
    case 9:
        system("cls");
        printf("\n\nWooow!\nAhora vas a medir el area del paralelogramo\n\n*Paralelogramo*\n");
        printf("Ingresa la base del paralelogramo: ");
        scanf("%f",&baseT);
        printf("Ingresa la altura del paralelogramo: ");
        scanf("%f",&alturaT);
        areaT = baseT*alturaT;
        perimetro=(alturaT*2)+(baseT*2);
        printf("\nEl area del paralelogramo es: %f",areaT);
        printf("\nEl perimetro del paralelogramo es: %f", perimetro);
        break;
    default:
        system("cls");
        printf("La opcion que presionaste esta incorrecta");

    }
    return 0;
}
