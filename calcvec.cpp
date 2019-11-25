#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;
void  imprimir_menu ();
void leer_opcion(int &opt);


void printVector(int myVector[], int size);
void printVectorF(double myVector[], int size);
void scanVector(int myVector[], int size);

void sumaVector(int vector1[3],int vector2[3],int *ptr);
void restaVector(int vector1[3],int vector2[3],int *ptr);
 void ppuntoVector(int myVector[3],int myVector2[3],int size);
float norma (int myVector[],int size);
float pEscalar (int myVector[], int myV2[],int size);
 void ppuntoVector(int myVector[3],int myVector2[3],int size);

void uno(int vector1[3], int *ptr, double *ptr2);
int main(){

int opt;	
float n,e;

 	char rep;



int a[3] = {0,0,0};
int *ptra = &a[0];
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
double cf[3] = {0.0,0.0,0.0};

int *ptrC = &c[0];
double *ptrCf = &cf[0];
	scanVector(a,3);
		scanVector(b,3);

printf("\n Vector 1\n");
printVector(a,3);

printf("\n Vector 2\n");
printVector(b,3);


  do{
  
  		imprimir_menu ();
		leer_opcion(opt);
switch(opt){
	case 1: 
	sumaVector(a,b,ptrC);
printf("\n suma Vector 1\n");
printVector(c,3); break;
	
	case 2: 
	restaVector(a,b,ptrC);
printf("\n resta Vector 1\n");
printVector(c,3); break;
	
	case 3:
	
n = norma(a,3);
printf("\n norma con raiz Vector 1 %f \n",n);
break;

 	case 4: 
 	
printf(" \n Producto punto");
ppuntoVector(a,b,3);
break;
case 5: 


printf("\n \n Producto escalar");
e = pEscalar(a,b,3);
printf(" \n producto escalar con raiz: %f ",e);
 break;
 	
 	case 6: 
 	printf("\n \n vector unitario \n");
uno(a,ptra,ptrCf);
break;
	
	
default:
    printf("opcion invalida"); break;
 }

 printf("\nDesea hacer otra operacion? S N \n");
rep = getch();
} while((rep=='S') || (rep=='s'));







}

void printVector(int myVector[],int size){
for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,myVector[i]);
	}
}

void scanVector(int myVector[],int size){
for (int i=0; i<size; i++){
	int valor;
	printf("vector[%d]: \n",i);
	scanf("%d",&valor);
	myVector[i] = valor;
	
	}
}

void printVectorF(double myVector[],int size){
for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,myVector[i]);
	}
}


void sumaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] + vector2[i];
	}
}
 

void restaVector(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] - vector2[i];
	}


}


float norma (int myVector[3],int size){
	float suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += myVector[i]*myVector[i];
		
	}printf(" norma sin raiz %f",suma);

	return sqrt(suma);

}
void ppuntoVector (int myVector[3],int myVector2[3],int size){
	float suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += myVector[i]*myVector2[i];
		
	}
	printf(" \n la suma ppunto: %f", suma);

	

}
float pEscalar (int myVector[3], int myVector2[3],int size){
	float suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += myVector[i]*myVector[i] +myVector2[i]*myVector2[i];
		
	}printf(" \n raiz de %f",suma);

	return sqrt(suma);

}
void uno(int vector1[3],int *ptr, double *ptr2){
		float suma=0.0;
	for(int i = 0; i<3; i++){
			suma += vector1[i]*vector1[i];
	
	}
	float r = sqrt (suma);
	printf(" El v unitario es: %f \n a la menos uno 1/%f = %f \n",r,r,1/r);
	for(int i = 0; i<3; i++){
		
	
		*(ptr2+1) = *(ptr+i)* 1/r; 
		printf(" el v unitario: %d * 1/%f ",vector1[i],1/r);
		printf (" = %f \n",*(ptr2+1) );
	
}
printf("\n");
}


void imprimir_menu(){
 printf("1. suma\n");
 printf("2. resta\n");
 printf("3. norma\n");
 printf("4. producto punto\n");
  printf("5. producto escalar\n");
   printf("6. vector unitario\n");
  

 }	
 void leer_opcion(int& opt){
 printf("introduce una opcion");
 scanf("%d",&opt);
 }



