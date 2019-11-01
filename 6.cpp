#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	float x1, x2;
	cout << "Введите a, b и c: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a != 0)
	{
		if (b != 0)
		{
			float d = b * b - 4 * a * c;
			if (d < 0)
			{
				cout << "Решений не существует.";
			}
			else if (d == 0)
			{
				x1 = (-b) / (2 * a);
				cout << "x = " << x1;
			}
			else
			{
				x1 = (-b + sqrt(d)) / (2 * a);
				x2 = (-b - sqrt(d)) / (2 * a);
				cout << "x1 = " << x1 << "\nx2 = " << x2;
			}
		}
		else
		{
			if (-c / a < 0)
			{
				cout << "Решений не существует.";
			}
			else
			{
				x1 = sqrt(-c / a);
				cout << "x1 = " << x1 << "\nx2 = " << -x1;
			}
		}
	}
	else if (b != 0)
	{
		x1 = -c / b;
		cout << "x = " << x1;
	}
	else
	{
		cout << "Это не уравнение";
	}

}