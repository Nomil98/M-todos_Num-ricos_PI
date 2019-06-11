#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
int main(){
	// T1 Temperatura inicial, T15 Temperatura
	double T1=80, T15=48, Ta=28, k=0, T=0;
	 double A=0; //Condición Inicial
	
	//Aplicamos la condición inicial
	A = T1-Ta;
	k= log(T15-Ta/15)/15;	
	T= 52exp(-0.06370076 )+ 28;
	printf("La solucion es: %d", T);
	
	
	
	 
}
	
	
