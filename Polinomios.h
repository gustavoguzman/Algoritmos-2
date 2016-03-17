#include "stdafx.h"
#include <string>
#include <iostream>
const int n=10;
const int m=10;
using namespace std;
//declaracion del objeto
class Matrices
{
	//atributos de la matriz
private:

	float matriz[n][m];
	int tamano_fila;
	int tamano_columna;
	//Funciones que permiten poder acceder los valores declarados
public:
	float Matriz(int f,int c);
	void Matriz(int f,int c ,float valor);
	int Tamano_fila();
	int Tamano_columna();
	void Tamano_fila(int f);
	void Tamano_columna(int c);
	Matrices Sumar(Matrices A,Matrices B);
	Matrices Restar(Matrices A,Matrices B);
	Matrices Multiplicar(Matrices A,Matrices B);
	Matrices Multiplicar_escalar(Matrices A,float escalar);
	Matrices Transpuesta(Matrices A);
	Matrices Ordenar(Matrices A);
	void Guardar_matrices_a_objeto(float Mat[n][m],int tf,int tc);
	void Devolver_matrices_a_objeto(float Mat[n][m],int &tf,int &tc);

};

//Metodos
	
	float Matrices::Matriz(int f,int c)
	{
		return matriz[f][c];
	}
	void Matrices::Matriz(int f,int c ,float valor)
	{
	matriz[f][c]=valor;
	}
	int Matrices::Tamano_fila()
	{
	return tamano_fila;
	}
	int Matrices::Tamano_columna()
	{
	return tamano_columna;
	}
	void Matrices::Tamano_fila(int f){
	tamano_fila=f;
	}
	void Matrices::Tamano_columna(int c){
	tamano_columna=c;
	}
Matrices Matrices::Sumar(Matrices A,Matrices B)
{
int i,j;
Matrices C;
i=0;

while(i<A.Tamano_fila()){//A.
j=0;
while(j<A.Tamano_columna())//A.
{
	C.Matriz(i,j,(A.Matriz(i,j)+B.Matriz(i,j)));
j++;

}
i++;
}
C.Tamano_fila(i);
C.Tamano_columna(j);
return C;
}

void Matrices::Guardar_matrices_a_objeto(float Mat[n][m],int tf,int tc)
{
	int i,j;
	i=0;
	while(i<tf)
	{
	
		j=0;
		while(j<tc)
		{
			Matriz(i,j,Mat[i][j]);			
			j++;
		
		
		}
		i++;
	
	}
	Tamano_fila(tf);
	Tamano_columna(tc);

}
	void Matrices::Devolver_matrices_a_objeto(float Mat[n][m],int &tf,int &tc)
	{
	int i,j;
	i=0;
	while(i<Tamano_fila())
	{
	
		j=0;
		while(j<Tamano_columna())
		{
			Mat[i][j]=Matriz(i,j);			
			j++;
		
		
		}
		i++;
	
	}
	tf=Tamano_fila();
	tc=Tamano_columna();
	
	}

