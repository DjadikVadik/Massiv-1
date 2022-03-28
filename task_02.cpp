
//  2.	Создать массив из 20 случайных чисел. 
//      Вывести все элементы массива с чётными индексами.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	int mass[20];
	srand(time(0));

	for (int i = 0; i < 20; i++)
	{
		mass[i] = rand() % 50;
		int x = i % 2;
		if (x == 0) cout << mass[i] << "\n";
	}
}