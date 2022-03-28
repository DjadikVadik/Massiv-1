
//  4.	Создать символьный массив из 100 случайных элементов.
//      Определить, сколько в нём цифр, букв и знаков пунктуации.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	char mass[100];
	int cifra = 0,
		bukva = 0,
		znak = 0;

	srand(time(0));

	for (int i = 0; i < 100; i++)
		mass[i] = rand() % 256;

	for (int i = 0; i < 100; i++)
	{
		if (mass[i] >= '0' && mass[i] <= '9') cifra++;
		else if (mass[i] >= 'a' && mass[i] <= 'z') bukva++;
		else if (mass[i] >= 'A' && mass[i] <= 'Z') bukva++;
		else if (mass[i] >= 'а' && mass[i] <= 'я') bukva++;
		else if (mass[i] >= 'А' && mass[i] <= 'Я') bukva++;
		else znak++;
	}

	cout << "Цифры : " << cifra;
	cout << "\nБуквы : " << bukva;
	cout << "\nЗнаки пунктуации : " << znak << "\n\n";
}
