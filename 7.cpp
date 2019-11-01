#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	double ax, ay, bx, by, cx, cy;
	int ch;
	double s;
	cout << "Введите номер варианта для расчета площади (1 - Через длины сторон a,b и c; 2 - Через координаты вершин A, B и C): ";
	cin >> ch;
	if (ch == 1||ch == 2)
	{
		if(ch == 1)
		{
			cout << "a: "; cin >> a;
			cout << "b: "; cin >> b;
			cout << "c: "; cin >> c;
		}
		else
		{
			cout << "ax ay: "; cin >> ax >> ay;
			cout << "bx by: "; cin >> bx >> by;
			cout << "cx cy: "; cin >> cx >> cy;

			a =  sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));
			b = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
			c = sqrt(pow(cx - bx, 2) + pow(cy - by, 2));
		}

		if (a >= 0 && b >= 0 && c >= 0) 
		{
			double p = 0.5 * (a + b + c);
			s = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << s;
		}
		else
		{
			cout << "Вы ввели некорректные данные.";
		}
	}
	else
	{
		cout << "Вы ввели не существующий вариант.";
	}
	cin >> b;
	cin >> c;

}