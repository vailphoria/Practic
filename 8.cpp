#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	char smb;
	//cout << "Введите выражение:"; cin >> a >> smb >> b;
	cout << "Введите выражение: "; cin >> a >> smb >> b;

	if (smb == '+') cout << a + b;
	else if (smb == '-') cout << a - b;
	else if (smb == '*') cout << a * b;
	else if (smb == '/') cout << a / b;
	else cout << "Калькулятор не может выполнить данную операцию.";


}