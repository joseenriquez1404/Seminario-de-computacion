#include <iostream>
#include <vector>

/*
Leer n, luego leer n datos, almacenarlos en un vector de máximo 100. 
Después ordenarlos de menor a mayor por el método de burbuja. 
Ya ordenados, transferimos los datos a otro vector, colocando, primero, todos los pares (que se mantengan ordenados entre ellos), 
después colocar, en el mismo nuevo vector, todos los impares y que sigan ordenados entre ellos

*/

using namespace std;

int main()
{
	int n;
	vector<int> Vector;
	vector<int> final;
	bool cambio;
	
	do{
		cout << "Ingresa la cantidad de datos";
		cin >> n;
	}while (n > 100);
	
	for(int i = 0; i < n; i++){
		int nu;
		cin >> nu;
		Vector.push_back(nu);
	}
	
	// Metodo burbuja
	for(int i = 0; i < n; i++){
		cambio = false;
		for(int j = 0; j < n - i; j++){
			if(Vector[j] > Vector[j + 1]){
				swap(Vector[j], Vector[j + 1]);
				cambio = true;
			}
		}
		
		if(!cambio) break;
	}	
	
	// Transferir los valores pares
	for(int i = 0; i < n; i++){
		if(Vector[i] % 2 == 0) final.push_back(Vector[i]);
	}
	
	// Transferir los valores impares
	for(int i = 0; i < n; i++){
		if(Vector[i] % 2 != 0) final.push_back(Vector[i]);
	}
	
	// Mostrar resultado 
    cout << "Resultado final: " << endl;
    for (int i = 0; i < n; i++) {
        cout << Vector[i] << " ";
    }
	
	// Mostrar resultado 
    cout << "Resultado final (Pares -> Impares): " << endl;
    for (int i = 0; i < n; i++) {
        cout << final[i] << " ";
    }
	
	
	return 0;
}
