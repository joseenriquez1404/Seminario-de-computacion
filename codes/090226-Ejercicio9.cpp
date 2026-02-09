#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vectorA, vectorB, res;
	int n, m;
	
	cout << "Ingresa la cantidad de datos que va a tener el vector A: ";
	cin >> m;
	cout << "Ingresa la cantidad de datos que va a tener el vector B: ";
	cin >> n;
	
	for(int i = 0; i < m; i++)
	{
		int val;
		cout << "Ingresa el valor " << i + 1 << " del vector A: ";
		cin >> val;
		vectorA.push_back(val);
	}

	for(int i = 0; i < n; i++)
	{
		int val;
		cout << "Ingresa el valor " << i + 1 << " del vector B: ";
		cin >> val;
		vectorB.push_back(val);
	}
	
	int total = n + m;
	vector<bool> usadoA(m, false);
	vector<bool> usadoB(n, false);
	
	for(int k = 0; k < total; k++)
	{
		int menorA = 1e9, posA = -1;
		int menorB = 1e9, posB = - 1;
		
		// Encontramos el menor de A
		for(int i = 0; i < m; i++)
		{
			if(!usadoA[i] && vectorA[i] < menorA)
			{
				menorA = vectorA[i];
				posA = i;
			}
		}
		
		// Encontramos el menor de B
		for(int j = 0; j < n; j++)
		{
			if(!usadoB[j] && vectorB[j] < menorB)
			{
				menorB = vectorB[j];
				posB = j;
			}
		}
		
		if(menorA <= menorB && posA != - 1)
		{
			res.push_back(menorA);
			usadoA[posA] = true;
		}
		else if(posB != -1){
			res.push_back(menorB);
			usadoB[posB] = true;
		}
	}
	
	cout << "\nResultado:\n";
	for(int i = 0; i < total; i++)
	{
		cout << res[i] << " ";
	}
	return 0;
}
