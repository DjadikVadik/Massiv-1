
//11.	Создать массив из 10 целых случайных чисел. Изменить порядок следования элементов 
//      массива на противоположный (1-й элемент меняется с 10-м, 2-й элемент с 9-м и тд).

#include <iostream>
using namespace std;

int main()
{
	system(" chcp 1251 > 0");
	int mass[10];

		srand(time(0));

	for (int i = 0; i < 10; i++)
		mass[i] = rand();
	cout << "изначальный массив:\n";
	for (int i = 0; i < 10; i++)
		cout << mass[i] << "\n";

	int j = 9;
	for (int i = 0; i < 5; i++)
	{
		int x; 
		x = mass[i];
		mass[i] = mass[j];
		mass[j] = x;
		j--;
	}
	cout << "\nизмененный массив:\n";
	for (int i = 0; i < 10; i++)
		cout << mass[i] << "\n";
}
