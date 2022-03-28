
//9.	Создать массив на 100 вещественных чисел. Определить, 
//      сколько элементов массива не имеют вещественной части.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	double mass[100];
	int n=0;
	double x, y;


	srand(time(0));

	for (int i = 0; i < 100; i++)
	{
		x = rand();
		y = rand() % 100;
		y = y / 100;
		if (y == 0) n++;
		mass[i] = x + y;
		if (y == 0) printf("%0.2f\n", mass[i]);
	}
	cout << n << " - элементов в массиве не имеют вещественной части!" << "\n";
}
