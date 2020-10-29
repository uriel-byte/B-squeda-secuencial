#include<stdio.h>
#include<conio.h>

// prototipos de las funciones que se utilizaran en el programa
void llenar(int v[], int n);
int BusquedaSecuencial(int v[], int n, int dato);
void imprimir(int v[], int n);

//Funcion principal main
main()
{
int nA, X, pos;
int A[100];
printf("\n\n 			\16 ALGORITMO DE BUSQUEDA SECUENCIAL \16 \n\n");

printf("	\1 Digite el dimension del vector \1 :");
scanf("%d", &nA);


printf("\n \7 DIGITE LOS DATOS DEL VECTOR\n");
llenar(A,nA);

printf("\nDigite el dato a buscar ");
scanf("%d", &X);

pos=BusquedaSecuencial(A, nA, X);

if (pos < nA)
   printf("\nEL DATO FUE ENCONTRADO EN LA POSICION %d", pos);

else
   printf("\nEL DATO NO FUE ENCONTRADO  ");

getch();
}



int BusquedaSecuencial(int v[], int n, int dato) 
{
	 int inf, sup, centro, pos=0;
     
     while (pos < n)
     {
           if (v[pos] == dato)
              return(pos);
           else   
              pos++;
     }         
	 
    return(pos);
}


void llenar(int v[], int n)
{
int i;

for (i=0; i<n; i++)
{
printf("\nDigite el valor de la posicion %d ", i);
scanf("%d", &v[i]);
}
}

void imprimir(int v[], int n)
{
int i;
for (i=0; i<n; i++)
{
printf("\nEl valor de la posicion %d  es %d ", i, v[i]);
}
}
//https://sites.google.com/site/progrup2014/busqueda-secuencial
