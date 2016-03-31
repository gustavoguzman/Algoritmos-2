// parcial.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "NOMBRES.h"
#include "INTERFAZ.h"

using namespace System;
const int n1=10;
const int m1=10;

int main(array<System::String ^> ^args)
{



	Interfaz Entrada_salida;
	string A[n][m];
	int tamano_fila_A;
	int tamano_columna_A;
	Matrices Ma1;

	//A
	Entrada_salida.Leer(A,tamano_fila_A,tamano_columna_A);
	Ma1.Guardar_matrices_a_objeto(A,tamano_fila_A,tamano_columna_A);
	


    //Console::WriteLine(L"Hello World");
	getchar();
	getchar();
    return 0;


}

