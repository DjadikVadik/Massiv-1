
// 6.	Создать массив из 20 случайных чисел в диапазоне от -10 до 30. 
//      Написать программу, определяющую сумму элементов массива, 
//      находящихся в массиве после первого отрицательного элемента.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	int mass[20];
	int s = 0;
	

	srand(time(0));

	for (int i = 0; i < 20; i++)
		mass[i] = rand() % 41-10;	

	for (int i = 0; i < 20; i++)
	{
		if (mass[i] < 0)
		{
			i++;
			for (i; i < 20; i++)
				s = s + mass[i];
		}
	}

	cout << "\nСумма элементов массива, находящихся в массиве после первого отрицательного элемента : " << s << "\n";
}
