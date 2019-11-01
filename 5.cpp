#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double g = -9.8;
	double x0, v0, x;
	int t;
	cout << "Введите x0, v0 и t: ";
	cin >> x0 >> v0 >> t;
	
	x = x0 + v0 * t + (1f/2*g * t * t);
	//x = x0 + v0 * t + (g * t * t / 2);
	cout << "\nx = " << x;

}