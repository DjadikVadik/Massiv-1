
//19.	Создать массив из 10 целых случайных чисел в диапазоне от 0 до 100.  
//      Найти элемент, максимально близкий к среднему арифметическому значений массива

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 10;
	int mass[A];

	srand(time(0));

	for (int i = 0; i < A; i++)
		mass[i] = rand() % 101;

	double srednee,
		sum = 0;

	for (int i = 0; i < A; i++)
		sum = sum + mass[i];

	srednee = sum / A;

	double min = srednee;  // найменьшая разница между средним арефметическим и значением элемента массива

	for (int i = 0; i < A; i++)
	{
		double x = abs(srednee - mass[i]);
		if (x < min) min = x;
	}

	cout << "Наш массив:\n";
	for (int i = 0; i < A; i++)
		cout << mass[i] << "\t";

	cout << "\n\nСреднее арифметическое всех элементов массива: " << srednee << "\n\n";

	cout << "Элемент максимально близкий к среднему арифметическому значений массива: ";

	for (int i = 0; i < A; i++)
		if (min == abs(srednee - mass[i])) cout << mass[i] << "\n\n";
}
