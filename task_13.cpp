
//13.	Написать программу, копирующую один массив в другой следующим образом: 
//      сначала копируются последовательно все элементы, большие 0, затем последовательно
//      все элементы, равные 0, а затем последовательно все элементы, меньшие 0.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251>0");
	int mass_a[20],
		mass_b[20],


		srand(time(0));

	for (int i = 0; i < 20; i++)
		mass_a[i] = rand() % 41 - 20;

	cout << "Массив А:\n";
		for (int i = 0; i < 20; i++)
			cout << mass_a[i] << "\n";

	int j = 0;

	for (int i = 0; i < 20; i++)
	{
		if (mass_a[i] > 0)
		{
			mass_b[j] = mass_a[i];
			j++;
		}
	}

	for (int i = 0; i < 20; i++)
	{
		if (mass_a[i] == 0)
		{
			mass_b[j] = mass_a[i];
			j++;
		}
	}
	for (int i = 0; i < 20; i++)
	{
		if (mass_a[i] < 0)
		{
			mass_b[j] = mass_a[i];
			j++;
		}
	}

	cout << "\nМассив B:\n";
		for (int i = 0; i < 20; i++)
			cout << mass_b[i] << "\n";
}
