
//21.	Создать массив строк на 4000 элементов. Заполнить его римскими числами от 1 до 3999, показать на экране все элементы.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 4000;
	string mass[A];

	mass[0] = "0";

	for (int i = 1; i < A; i++)
	{
		string s, s1, s2, s3, s4;
		int j = i,
			n,
			y = 1;
		for (y; y <= j / 10; y *= 10);
		if (y == 1000)
		{
			n = j / y;
			if (n == 3) s1 = "MMM";
			else if (n == 2) s1 = "MM";
			else if (n == 1) s1 = "M";
			y = y / 10;
			j = j - (n * 1000);
		}

		if (y == 100)
		{
			n = j / y;
			if (n == 9) s2 = "CM";
			else if (n == 8) s2 = "DCCC";
			else if (n == 7) s2 = "DCC";
			else if (n == 6) s2 = "DC";
			else if (n == 5) s2 = "D";
			else if (n == 4) s2 = "CD";
			else if (n == 3) s2 = "CCC";
			else if (n == 2) s2 = "CC";
			else if (n == 1) s2 = "C";
			y = y / 10;
			j = j - (n * 100);
		}

		if (y == 10)
		{
			n = j / y;
			if (n == 9) s3 = "XC";
			else if (n == 8) s3 = "LXXX";
			else if (n == 7) s3 = "LXX";
			else if (n == 6) s3 = "LX";
			else if (n == 5) s3 = "L";
			else if (n == 4) s3 = "XL";
			else if (n == 3) s3 = "XXX";
			else if (n == 2) s3 = "XX";
			else if (n == 1) s3 = "X";
			y = y / 10;
			j = j - (n * 10);
		}

		if (y == 1)
		{
			n = j / y;
			if (n == 9) s4 = "IX";
			else if (n == 8) s4 = "VIII";
			else if (n == 7) s4 = "VII";
			else if (n == 6) s4 = "VI";
			else if (n == 5) s4 = "V";
			else if (n == 4) s4 = "IV";
			else if (n == 3) s4 = "III";
			else if (n == 2) s4 = "II";
			else if (n == 1) s4 = "I";
		}

		s = s1 + s2 + s3 + s4;

		mass[i] = s;
	}

	cout << "Массив из римских чисел от 0 до 4000:\n";
	for (int i = 0; i < A; i++)
		cout << mass[i] << "\n";
	cout << "\n\n";
}
