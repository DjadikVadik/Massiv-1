
// 1.	Ввести массив из 5 чисел, а затем вывести его в обратном порядке. 

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251 > 0");
	int mass[]{ 12,13,14,15,16 };

	for (int i = 4; i >= 0; i--)
		cout << mass[i] << "\n";
}