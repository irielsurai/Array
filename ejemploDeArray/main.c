
#include <stdio.h>
#include <stdlib.h>

void mostrarArray (int miArray [], int largoDelArray);
void inicializarArray (int miArray [], int largoDelArray);
void cargaSecuencialDeArray (int miArray [], int largoDelArray, char mensaje[]);
float promediar (int miArray [], int largoDelArray);
void ordenar (int miArray [], int largoDelArray);

//todavia falta que saques el maximo y el minimo

int main()
{
    int listadoDeEdades [6];
    //char presentacion [17];
    inicializarArray (listadoDeEdades,6);
    cargaSecuencialDeArray(listadoDeEdades, 6, "Indique su Edad: ");
    promediar (listadoDeEdades, 6);
    ordenar (listadoDeEdades, 6);
    mostrarArray(listadoDeEdades, 6);

    return 0;
}

void ordenar (int miArray [], int largoDelArray)
{
    int i;
    int j;
    int aux;
    for (i=0; i<largoDelArray-1 ; i++) //agarra el primer num
    {
        for (j=i+1; j<largoDelArray ; j++) //agarra el sig
        {
            if (miArray [i] > miArray[j])
            {
                aux = miArray [i];
                miArray [i] = miArray [j];
                miArray [j] = aux;
            }
        }
    }
}


float promediar (int miArray [], int largoDelArray)
{
    int i;
    float suma;
    float promedio;
    suma = 0;
    for (i=0; i<largoDelArray; i++)
    {
        suma = suma + miArray [i];
    }
    promedio = suma / largoDelArray;
    printf ("%f",promedio);
    return promedio;
}


void inicializarArray (int miArray [], int largoDelArray)
{
    int i;
    for (i=0; i<largoDelArray ; i++)
    {
        miArray[i]=0;
    }
}


void mostrarArray (int miArray [], int largoDelArray)
{
    int i;
    for (i=0; i<largoDelArray; i++)
    {
        printf("%d \n", miArray[i]);
    }
}


void cargaSecuencialDeArray (int miArray [], int largoDelArray, char mensaje[])
{
    int i;
    for (i=0; i<largoDelArray; i++)
    {
        printf(mensaje, i+1);
        scanf("%d", &miArray[i]);
    }
}


/*
int numMayor ()
{
    numMayor= 0;
    for (i=0; i<10; i++)
    {
        if (miArray[i]> numMayor)
        {
            numMayor = miArray[i];
        }
    }
    printf ("La mayor edad es: %d", mayorEdad);


*/

/*  COSAS QUE SAQUE DEL MAIN

    int i;
    int listaDeNumeros[3];

    for (i=0; i<3; i++)
    {
        listaDeNumeros[i]=0;
    }


    for (i=0; i<3; i++)
    {
        printf ("%d \n ", listaDeNumeros);
    }

    // pedir 10 edades con, hacer un array y mostrarlo;
    int i;
    int listaDeEdaes [10];
    int mayorEdad;

    for (i=0; i<10; i++)
    {
        printf("ingrese edad:");
        scanf("%d", &listaDeEdaes[i]);
    }
     for (i=0; i<10; i++)
    {
        printf("%d \n", listaDeEdaes[i]);
    }
    mayorEdad= 0;
    for (i=0; i<10; i++)
    {
        if (listaDeEdaes[i]> mayorEdad)
        {
            mayorEdad = listaDeEdaes[i];
        }
    }
    printf ("La mayor edad es: %d", mayorEdad); */

