#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int random = 0;
	int anyone = 1;
	int n;
	while (anyone == 1)
	{
		random = rand() % 100;
		cout << "Введите число от 0 до 100:" << endl;
		for(int i=0;i<5;i++)
		{
			cin >> n;
			if (n == random)
			{
				cout << "Поздравляю! Вы угадали\n";
				i = 5;
			}
			else if (n > random && i < 4)cout << "Загаданное число меньше\n";
			else if (n < random && i < 4)cout << "Загаданное число больше\n";
			else cout << "Вы проиграли.Было загадано : " << random << endl;
		}
		cout << "Хотите начать сначала ? (1 - ДА)\n"; cin >> anyone;
	}


}