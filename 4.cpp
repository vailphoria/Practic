#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, i;

	cout << "Введите 2 числа: \na = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Изменение значения с использованием доп. переменной:";
	i = a;
	a = b;
	b = i;
	cout << "\na = " << a << "\nb = " << b;
	cout << "\nИзменение значения без использования доп. переменной:";
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "\na = " << a << "\nb = " << b;

}