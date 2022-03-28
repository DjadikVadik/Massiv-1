
//18.	Создать массив из 10 вещественных чисел. Преобразовать массив так, чтобы сначала шли 
//      все элементы с вещественной частью, а потом без нее.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 10;
	double mass[A]{ 1.256, 2, 12.34, 3, 23.456, 4, 5.45, 7, 45.34, 54 },
		mass1[A];

	int j = 0;

	for (int i = 0; i < A; i++)
	{
		int x = mass[i] / 1;
		double y = mass[i] - x;
		if (y != 0)
		{
			mass1[j] = mass[i];
			j++;
		}
	}

	for (int i = 0; i < A; i++)
	{
		int x = mass[i] / 1;
		double y = mass[i] - x;
		if (y == 0)
		{
			mass1[j] = mass[i];
			j++;
		}
	}

	cout << "Изначальный массив:\n";
	for (int i = 0; i < A; i++)
		cout << mass[i] << "\t";

	cout << "\n\nИзмененный массив:\n";
	for (int i = 0; i < A; i++)
		cout << mass1[i] << "\t";
	cout << "\n\n";
}
