
//8.	Создать массив из 20 случайных чисел. Определить минимальный и 
//      максимальный элемент массива (вывести значение и порядковый номер).

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	int mass[20];
	int min, max, n;


	srand(time(0));

	for (int i = 0; i < 20; i++)
		mass[i] = rand();

	min = mass[0];
	n = 0;
	for (int i = 0; i < 20; i++)
	{
		if (mass[i] < min)
		{
			min = mass[i];
			n = i;
		}
	}
	cout << "Минимальный элемент массива : " << min << " его порядковый номер в массиве : " << n << "\n";

	max = mass[0];
	n = 0;
	for (int i = 0; i < 20; i++)
	{
		if (mass[i] > max)
		{
			max = mass[i];
			n = i;
		}
	}
	cout << "\nМаксимальный элемент массива : " << max << " его порядковый номер в массиве : " << n << "\n";

}
