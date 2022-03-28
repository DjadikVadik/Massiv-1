
//20.	Осуществить циклический сдвиг массива на N элементов. Направление сдвига указывает пользователь 
//      (например, массив 0,1,2,3,4,5,6,7,8,9 при циклическом сдвиге вправо на 3 элемента примет вид 7,8,9,0,1,2,3,4,5,6). 

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 10;
	int mass[A]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		mass1[A];

	srand(time(0));

	int n, n1;
	cout << "Введите на какое количество элементов будет осуществлен сдвиг: ";
	cin >> n;
	cout << "Введите направление сдвига:\n1 - вправо\n2 - влево\n";
	cin >> n1;

	if (n1 == 1)
	{
		int j = 0;
		for (int i = A - n; i < A; i++)
		{
			mass1[j] = mass[i];
			j++;
		}
		for (int i = 0; i < A - n; i++)
		{
			mass1[j] = mass[i];
			j++;
		}
	}

	else if (n1 == 2)
	{
		int j = 0;
		for (int i = n; i < A; i++)
		{
			mass1[j] = mass[i];
			j++;
		}
		for (int i = 0; i < n; i++)
		{
			mass1[j] = mass[i];
			j++;
		}
	}

	else cout << "\n\nВы ввели неверное направление сдвига!!!\n";

	cout << "\nИсходный массив:\t";
	for (int i = 0; i < A; i++)
		cout << mass[i] << "\t";

	cout << "\n\nИзмененный массив:\t";
	for (int i = 0; i < A; i++)
		cout << mass1[i] << "\t";

	cout << "\n\n";
}
