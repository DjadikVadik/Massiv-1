
//17.	Создать массив из 20 случайных чисел в диапазоне от -10 до 20. 
//      Определить максимальное количество подряд идущих положительных элементов,
//      не прерываемых ни нулями, ни отрицательными числами. Вывести найденный фрагмент.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 20;
	int mass[A];

	srand(time(0));

	for (int i = 0; i < A; i++)
		mass[i] = rand() % 31 - 10;

	int max = 0,
		n = 0;

	for (int i = 0; i < A; i++)
	{
		if (mass[i] > 0) n++;
		else n = 0;
		if (n > max) max = n;
	}
	int mass1[A],
		j = 0;
	for (int i = 0; i < A; i++)
	{
		if (mass[i] <= 0) j = 0;
		else
		{
			mass1[j] = mass[i];
			j++;
		}
		if (j == max) break;
	}
	
	cout << "Массив в диапазоне от -10 до 20 :\n";
	for (int i = 0; i < A; i++)
		cout << mass[i] << "\t";

	cout << "\n\nМаксимальное количество подряд идущих положительных элементов: " << max << "\n\n";
	cout << "Этот фрагмент:\n";
	for (int i = 0; i < max; i++)
		cout << mass1[i] << "\t";
	cout << "\n\n";
}
