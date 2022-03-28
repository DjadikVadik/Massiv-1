
//14.	Даны 2 массива размерности M и N соответственно. Необходимо переписать в 
//      третий массив общие элементы первых двух массивов, без повторений.

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	const int A = 20,
		B = 10,
		C = A > B ? B : A;
	int mass_a[A],
		mass_b[B],
		mass_c[C];


	srand(time(0));

	for (int i = 0; i < A; i++)
		mass_a[i] = rand() % 20;

	for (int i = 0; i < B; i++)
		mass_b[i] = rand() % 20;

	int k = 0;

	for (int i = 0; i < A; i++)
		for (int j = 0; j < B; j++)
		{
			if (mass_a[i] == mass_b[j])
			{
				bool new_element = true;
				for (int a = 0; a < k; a++)
				{
					if (mass_a[i] == mass_c[a])
						new_element = false;
				}
				if (new_element)
				{
					mass_c[k] = mass_a[i];
					k++;
				}
			}
		}

	cout << "Массив А:\n";
	for (int i = 0; i < A; i++)
		cout << mass_a[i] << "\t";

	cout << "\nМассив B:\n";
	for (int i = 0; i < B; i++)
		cout << mass_b[i] << "\t";

	cout << "\nМассив C:\n";
	for (int i = 0; i < k; i++)
		cout << mass_c[i] << "\t";
}
