
//16.	Реализовать программу-лотерею. Программа загадывает 5 случайных неповторяющихся чисел в диапазоне от 1 до 42,
//      но не показывает их на экран. Пользователь пытается их угадать – вводит какие-то свои 5 чисел с клавиатуры. 
//      Назначить призы за совпадения. Например, если пользователь угадал три числа 
//      - приз 100 кредитов, если 4 - 500 кредитов, если 5 – 2500 кредитов.
//      И в целом, какова вероятность того, что пользователь угадает все 5 чисел?

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 5;
	int mass[A],
		mass1[A];

	srand(time(0));

	for (int i = 0; i < A; )
	{
		int x = rand() % 42 +1;
		bool new_element = true;
		for (int j = 0; j < i; j++)
		{
			if (mass[j] == x)
				new_element = false;
		}
		if (new_element)
		{
			mass[i] = x;
			i++;
		}
	}
	cout << "введите 5 неповторяющихся  чисел от 1 до 42!!!\n";
	for (int i = 0; i < A; i++)
	{
		int n;
		cout << "введите " << i + 1 << "-е число\n";
		cin >> n;
		mass1[i] = n;
	}
	cout << "\nвы выбрали числа:\t";
	for (int i = 0; i < A; i++)
		cout << mass1[i] << "\t";

	cout << "\n\nчисла выпавшие из лототрона:\t";
	for (int i = 0; i < A; i++)
		cout << mass[i] << "\t";

	int coincidence = 0;
	for (int i = 0; i < A; i++)
		for (int j = 0; j < A; j++)
		{
			if (mass[i] == mass1[j])
				coincidence++;
		}
	coincidence == 5 ? cout << "\n\nПоздравляем вы угадали все 5 чисел!!! Ваш выигрыш - 250000 грн\n"
		: coincidence == 4 ? cout << "\n\nПоздравляем вы угадали 4 числа!!! Ваш выигрыш - 50000 грн\n"
		: coincidence == 3 ? cout << "\n\nПоздравляем вы угадали 3 числа!!! Ваш выигрыш - 10000 грн\n"
		: coincidence == 2 ? cout << "\n\nВы угадали 2 числа!!! Ваш выигрыш - 500 грн\n"
		: coincidence == 1 ? cout << "\n\nВы угадали 1 число!!! Ваш выигрыш - 100 грн\n"
		: cout << "\nВы не угадали ни одного числа!!! Ваш выигрыш - 0 грн\n";

	cout << "\nВероятность угадать все 5 чисел составляет: 1/" << (42 * 41 * 40 * 39 * 38) / (1 * 2 * 3 * 4 * 5) << "\n";
}
