#include<stdio.h>
#include<conio.h>
#include<math.h>

float main(){
    
float baseT,baseTa,alturaT,areaT,ladoT,perimetro,diametro,diamayor,diamenor,radio,PI=3.1416,lado, area,apotema;
//Triangulo
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

//Cuadrado
printf("\n\nMuy bien!\nAhora vamos a calcular el area del cuadrado \n\n*Cuadrado*");
printf("\nIngresa el lado del cuadrado  en centimetros: ");
scanf("%f",&lado);
area=lado*lado;
printf("\nEl area calculada del cuadrado es: %.2f %c",160,area,253);
perimetro=lado+lado+lado+lado;
printf("\nEl perimetro del cuadrado es: %.2f cm",perimetro);

//Rectangulo
printf("\n\nExcelente!\nAhora vamos a medir el area del rectangulo\n\n*Rectangulo*");
printf("\nIngrese el la base del rectangulo: ");
scanf("%f",&baseT);
printf("Ingresa la altura del rectangulo: ");
scanf("%f", &alturaT);
areaT=(baseT*alturaT);
perimetro= ((alturaT*2) + (baseT*2));
printf("\nEl area del rectangulo es: %f",areaT);
printf("\nEl perimetro del rectangulo es: %f",perimetro);

//Circulo
printf("\n\nFelicidades!\nAhora vas a medir e area y perimetro del circulo\n\n*Circulo*\n");
printf("Ingresa el radio del circulo: ");
scanf("%f",&radio);
areaT = PI*pow(radio,2);
diametro= ((PI*2)*radio);
printf("\nEl area del circulo es: %f",areaT);
printf("\nEl diametro del circulo es: %f",diametro);

//Rombo
printf("\n\nExelente!\nAhora vas a medir e area y perimetro del rombo\n\n*Rombo*\n");
printf("Ingresa la diagonal mayor ");
scanf("%f",&diamenor);
printf("Ingresa la diagonal menor ");
scanf("%f",&diamayor);
areaT = (diamenor*diamayor)/2;
diametro= PI*diamayor;
printf("\nEl area del rombo es: %f",areaT);
printf("\nEl diametro del rombo es: %f",diametro);

//Pentagono
printf("\n\nWooow!\nAhora vas a medir e area y perimetro del pentagono\n\n*Pentagono*\n");
printf("Ingresa el perimetro del pentagono: ");
scanf("%f",&perimetro);
printf("Ingresa la diagonal menor ");
scanf("%f",&diamayor);
areaT = (diamenor*diamayor)/2;
diametro= PI*diamayor;
printf("\nEl area del rombo es: %f",areaT);
printf("\nEl diametro del rombo es: %f",diametro);

//Hexagono 
printf("\n\nWooow!\nAhora vas a medir el area del hexagono\n\n*Hexagono*\n");
printf("Ingresa un lado del Hexagono: ");
scanf("%f",&lado);
printf("Ingresa el apotema del Hexagono ");
scanf("%f",&apotema);
areaT = ((lado*5)*apotema)/2;
printf("\nEl area del hexagono es: %f",areaT);

//Hexagono 
printf("\n\nWooow!\nAhora vas a medir el area del hexagono\n\n*Hexagono*\n");
printf("Ingresa un lado del Hexagono: ");
scanf("%f",&lado);
printf("Ingresa el apotema del Hexagono ");
scanf("%f",&apotema);
areaT = ((lado*5)*apotema)/2;
printf("\nEl area del hexagono es: %f",areaT);

//Trapecio 
printf("\n\nWooow!\nAhora vas a medir el area del trapecio\n\n*Trapecio*\n");
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

//Paralelogramo
printf("\n\nWooow!\nAhora vas a medir el area del paralelogramo\n\n*Paralelogramo*\n");
printf("Ingresa la base del paralelogramo: ");
scanf("%f",&baseT);
printf("Ingresa la altura del paralelogramo: ");
scanf("%f",&alturaT);
areaT = baseT*alturaT;
perimetro=(alturaT*2)+(baseT*2);
printf("\nEl area del paralelogramo es: %f",areaT);
printf("\nEl perimetro del paralelogramo es: %f", perimetro);

getch();
return 0;	
}
