#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, n;
    cout << "Ingresa la cantidad de filas: ";
    cin >> m;

    cout << "Ingresa la cantidad de columnas: ";
    cin >> n;

    vector< vector<int> > matriz(m, vector<int>(n, 0));

    vector<int> valores(n);

    // Leer n valores
    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor " << i + 1 << ": ";
        cin >> valores[i];
    }

    // Llenar primera columna
    for (int i = 0; i < m; i++)
    {
        matriz[i][0] = valores[i % n];
    }

    // Llenar ultima columna (valores de la primera × 2)
    int sumaUltima = 0;
    for (int i = 0; i < m; i++)
    {
        matriz[i][n - 1] = matriz[i][0] * 2;
        sumaUltima += matriz[i][n - 1];
    }

    // Imprimir ultima columna
    cout << "\nValores de la ultima columna:\n";
    for (int i = 0; i < m; i++)
    {
        cout << matriz[i][n - 1] << endl;
    }

    double promedio = (double)sumaUltima / m;
    cout << "\nPromedio de la ultima columna: " << promedio << endl;

    return 0;
}

