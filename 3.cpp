#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	double c, d;

	cout << "Введите 2 числа: ";
	cin >> a >> b;
	cout << "int and int:\n";
	cout << "a + b =" << a + b << ";\n";
	cout << "a - b =" << a - b << ";\n";
	cout << "a * b =" << a * b << ";\n";
	cout << "a / b =" << a / b << ".\n\n";

	cout << "Введите 2 числа: ";
	cin >> c >> d;
	cout << "double and double:\n";
	cout << "a + b =" << c + d << ";\n";
	cout << "a - b =" << c - d << ";\n";
	cout << "a * b =" << c * d << ";\n";
	cout << "a / b =" << c / d<< ".\n\n";

	cout << "Введите 2 числа: ";
	cin >> a >> d;
	cout << "int and double:\n";
	cout << "a + b =" << a + d << ";\n";
	cout << "a - b =" << a - d << ";\n";
	cout << "a * b =" << a * d << ";\n";
	cout << "a / b =" << a / d << ".\n\n";

	cout << "Введите 2 числа: ";
	cin >> c >> b;
	cout << "double and int:\n";
	cout << "a + b =" << c + b << ";\n";
	cout << "a - b =" << c - b << ";\n";
	cout << "a * b =" << c * b << ";\n";
	cout << "a / b =" << c / b << ".\n\n";
}