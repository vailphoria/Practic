#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, ans = 1;
	cout << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		ans *= i;
	}
	
	cout << "Факториал " << n << "! равен: " << ans;
}