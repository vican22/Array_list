#include <iostream>
using namespace std;

int parni(int* polje, int length) {
	int p_suma = 0;
	for (int i = 0; i < length; i++)
	{
		if (polje[i] % 2 == 0)
		{
			p_suma++;
		}
	}
	return p_suma;
}

int neparni(int* polje, int length) {
	int suma = 0;
	for (int i = 0; i < length; i++)
	{
		if (polje[i] % 2 != 0)
		{
			suma++;
		}
	}
	return suma;
}

bool prost(int n) {
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	if (n == 1)
	{
		return false;
	}
	return true;
}

int prosti(int* polje, int length) {
	int suma = 0;
	for (int i = 0; i < length; i++)
	{
		if (prost(polje[i]))
		{
			suma++;
		}
	}
	return suma;
}
int main() {
	int polje[] = { 3, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "Parni bojevi u polju: " << parni(polje, 10)  << endl;
	cout << "Neparni brojevi u polju: " << neparni(polje, 10) << endl;
	cout << "Broj prostih brojeva u polju: " << prosti(polje, 10) << endl;
	return 0;
}