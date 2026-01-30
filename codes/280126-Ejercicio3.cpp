/*
Nombre: Jose Manuel Enriquez Rodriguez
Matricula: 2132982

Leer los valores enteros m y n. 
La m representa cantidad de filas, y n cantidad de columnas. 
Después pasar a un vector aquellos valores de la matriz que encuentran en posiciones par de fila y columna, recorriendo el arreglo por filas. 
Después obtener el mayor de todos los valores del vector. 

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int filas, columnas;
	int mayor = -1e9;
	
	cout << "Ingrsa la cantidad de filas: ";
	cin >> filas;
	
	cout << "Ingresa la cantidad de columnas: ";
	cin >> columnas;
	
	vector< vector<int > > matriz(filas, vector<int>(columnas));
	vector<int> valores;
	
	// Insertamos los valores en el vector
	for(int fila = 0; fila < filas; fila++)
	{
		for(int columna = 0; columna < columnas; columna++)
		{
			cout << "Ingresa el valor de la posicion [" << fila + 1 << "][" << columna + 1 << "]: ";
			cin >> matriz[fila][columna]; 
		}
	}
	
	// Obtenemos los valores que estan en los indices pares
	for(int fila = 0; fila < filas; fila++)
	{
		for(int columna = 0; columna < columnas; columna++)
		{
			if(fila % 2 == 0 && columna % 2 == 0) valores.push_back(matriz[fila][columna]);
		}
	}
	
	for(int indice = 0; indice < valores.size(); indice++)
	{
		if(valores[indice] > mayor) mayor = valores[indice];
	}
	
	cout << "El elemento mas grande del segundo vector es: " << mayor;
	return 0;
}
