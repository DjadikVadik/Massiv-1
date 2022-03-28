
//10.	Создать массив из 200 случайных чисел в диапазоне от 0 до 200. 
//      Определить количество одноразрядных, двухразрядных и трёхразрядных
//      чисел в процентном отношении.

#include <iostream>
using namespace std;

int main()
{
	system(" chcp 1251 > 0");

	int mass[200],
		n;        // количество разрядов в числе
	double	n1 = 0,   // одноразрядные числа
		    n2 = 0,   // двухразрядные числа
		    n3 = 0;   // трехразрядные числа

	srand(time(0));

	for (int i = 0; i < 200; i++)
	{
		n = 0;
		mass[i] = rand() % 201;
		if (mass[i] != 0)
			for (int k = 1; k <= mass[i]; k *= 10) n++;
		else n++;
		if (n == 1) n1++;
		else if (n == 2) n2++;
		else if (n == 3) n3++;
	}
	printf("процент одноразрядных чисел: %0.2f\n", n1 / (200 / 100));
	printf("процент двухразрядных чисел: %0.2f\n", n2 / (200 / 100));
	printf("процент трехразрядных чисел: %0.2f\n", n3 / (200 / 100));
}