#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char procesador[31];
    char marca[31];
    int precio;
}sNotebook;

float aplicarAumento( float valor, int porcentaje);

int contadorVocales(char cadena[]);

int main()
{
/*
    float sueldo = 150;
    float SueldoConAumento;

    SueldoConAumento = aplicarAumento(sueldo,50);

    printf("El sueldo con aumento es: %2.f\n\n",SueldoConAumento);*/


    char cadenaCaracteres[] = "perro";

    int algo;

    algo = contadorVocales(cadenaCaracteres);

    printf("La palabra tiene %d vocales\n",algo);

    //sNotebook listaNotebooks;

    //HardcodearNotebooks(listaNotebooks);
    return 0;
}

float aplicarAumento(float valor, int porcentaje)
{
    float nuevoSueldo;

    nuevoSueldo = valor * porcentaje / 100 + valor;

    return nuevoSueldo;
}

int contadorVocales(char cadena[])
{
    int contador = 0;
    int i = 0;

    do
    {
        if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u' || cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O' || cadena[i]=='U')
        {
            contador++;
        }
        i++;

    }while(!(cadena[i]=='\0'));

    return contador;
}



void HardcodearNotebooks(sNotebook lista[], int cantidad)
{
    int id[] = {1,2,3,4};
    char procesador[][31] = {"i3","i7","i9","core 2"};
    char marca[][31] = {"intel","intel","intel","intel"};
    int precio[] = {12,24,48,96};

    int i;

    for(i=0;i<cantidad;i++)
    {
        lista[i].id = id[i];
        strcpy(lista[i].procesador,procesador[i]);
        strcpy(lista[i].marca,marca[i]);
        lista[i].precio = precio[i];
    }
}

