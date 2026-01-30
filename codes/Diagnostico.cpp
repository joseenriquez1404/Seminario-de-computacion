/*
* Nombre: Jose Manuel Enriquez Rodriguez
 * Matricula: 2132982
* Problema:Leer n datos enteros, primero leer el valor de n. Almacenarlos en un vector, después pasar a otro vector, primero todos los pares y después todos lo impasres
Después mostrar, primero todos los impares, en una misma línea, luego en otra línea todos lo pares, también calcular el promedio de todos lo pares, mostrar en nueva línea este ultimo resultado
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingresa la cantidad de elementos: ";
    cin >> n;
    vector<int> vectorBase;
    vector<int> finalVector;

    // Almacenar los n elementos en el primer vector
    for (int i = 0; i < n; i++) {
        int number;
        cout << "Ingresa un numero: ";
        cin >> number;
        vectorBase.push_back(number);
    }

    vector<int> pares;
    vector<int> impares;

    // Separamos a los pares de los impares en dos vectores diferentes
    for (int i = 0; i < vectorBase.size(); i++) {
        if (vectorBase[i] % 2 == 0) {
            pares.push_back(vectorBase[i]);
        } else {
            impares.push_back(vectorBase[i]);
        }
    }

    for (int x: pares) finalVector.push_back(x);
    for (int x: impares) finalVector.push_back(x);

    for (int x: impares) {
        cout << x << " ";
    }
    cout << endl;

    for (int x: pares) {
        cout << x << " ";
    }
    cout << endl;

    if (!pares.empty()) {
        float suma = 0;
        for (int x : pares) suma += x;
        cout << "El promedio de los numeros pares es: " << suma / pares.size() << endl;
    } else {
        cout << "El promedio de los numeros pares es 0" << endl;
    }

    return 0;
}