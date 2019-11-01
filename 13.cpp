#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, x = 0;
	cout << "Введите число: "; cin >> n;

	for (i = 1; i <= n; i*=2) {
		x++;
	}
	cout << x;
}