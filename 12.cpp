#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i;
	cout << "Введите число: "; cin >> n;

	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			cout << "Составное";
			return 0;
		}
	}
	cout << "Простое";
}