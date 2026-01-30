/*
Nombre: Jose Manuel Enriquez Rodriguez
Matricula: 2132982

Leer un valor n y luego leer n datos, almacenarlos en un vector, después pasar a otro vector la primera vez, el mayor de todos los valores, después, el siguiente mayor, etc. para que quede ordenado el segundo vector.
Posteriormente, obtener el promedio de todos los valores del vector y el listado de todos los valores del segundo vector.

*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int suma = 0;
	cout << "Ingresa la cantidad de elementos del vector: ";
	cin >> n;
	
	vector<int> vectorInicial, vectorFinal;
	
	// Leemos los n valores
	for(int i = 0; i < n; i++)
	{
		int val;
		cout << "Ingresa el valor de la posicion[" << i + 1 << "]: ";
		cin >> val;
		vectorInicial.push_back(val);
	}
	
	while(!vectorInicial.empty())
	{
		int mayor = -1e9;
		int indice = 0;
		for(int i = 0; i < vectorInicial.size(); i++)
		{
			if(vectorInicial[i] > mayor) {
				mayor = vectorInicial[i];
				indice = i;
			}
		}	
		vectorFinal.push_back(mayor);
		vectorInicial.erase(vectorInicial.begin() + indice);
		
	}	
	
	// Imprimimos el vector ordenado
	for(int i = 0; i < vectorFinal.size(); i++)
	{
		cout << vectorFinal[i];
	}
	
	for(int i = 0; i < vectorFinal.size(); i++){
		suma = suma + vectorFinal[i];
	}
	
	cout << "\nEl promedio de los valores son: " << (double)suma / vectorFinal.size();
	return 0;
}
