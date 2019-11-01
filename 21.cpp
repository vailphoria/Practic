#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int num[10][8];
	vector <pair<int, int> > plXY;
	int str = 10, stb = 8;
	srand(time(NULL));
	pair<int, int> player(0, 0);

	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stb; j++)num[i][j] = 0;
	}

	int nI = (rand() % str), nJ = (rand() % stb);
	num[nI][nJ] = 1;
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stb; j++) cout << num[i][j];
		cout << endl;
	}

	int counter = 0;
	while (counter < 5) {
		cin >> player.first >> player.second;

		bool isItTest = true;
		for (int i = 0; i < plXY.size(); i++) {
			if (player.first == plXY[i].first && player.second == plXY[i].second) {
				cout << "Эту уже проверяли" << endl;
				isItTest = false;
			}
		}

		if (player.first == nI+1 && player.second == nJ+1) {
			cout << "Вы угадали!" << endl;
			break;
		}
		else if (player.first > str || player.second > stb || player.first < 1 || player.second < 1) {
			cout << "Выход за границу массива" << endl;
		}
		else if (isItTest){
			cout << "Нет" << endl;
			plXY.push_back(make_pair(player.first, player.second));
			counter++;
		}

		if (counter == 5) cout << "GAME OVER" << endl;
	}
}

