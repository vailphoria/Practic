#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, st, ans = 1;
	cout << "Введите число: "; cin >> n; cout << "Введите степень: "; cin >> st;
	for (int i = 0; i < st; i++)
	{
		ans *= n;
	}
	
	cout << "Число " << n << " в степени " << st << " равно: " << ans;
}