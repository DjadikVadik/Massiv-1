
//12.	Создать два массива A и B по 5 элементов. Создать третий массив C на 10 элементов,
//      в который копируются элементы из первого и второго массива поочередно 
//      (например, С[0]=A[0], c[1]=B[0], C[2]=A[1], C[3]=B[1] и тд).

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 >0");
	int mass_a[5],
		mass_b[5],
		mass_c[10];

	srand(time(0));

	for (int i = 0; i < 5; i++)
		mass_a[i] = rand() % 20;
	for (int i = 0; i < 5; i++)
		mass_b[i] = rand() % 20;

	int j = -1;

	for (int i = 0; i < 5; i++)
	{
		j++;
		mass_c[j] = mass_a[i];
		j++;
		mass_c[j] = mass_b[i];
	}

	cout << "Массив А :\n";
	for (int i = 0; i < 5; i++)
		cout << mass_a[i] << "\n";
	cout << "\nМассив B :\n";
	for (int i = 0; i < 5; i++)
		cout << mass_b[i] << "\n";
	cout << "\nМассив C :\n";
	for (int i = 0; i < 10; i++)
		cout << mass_c[i] << "\n";
}
