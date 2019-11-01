#include <iostream>
using namespace std;

void bubbles(int* arrOfNum, int size) {
	int fNum, isChange = 0;
	for (int i = 0; i<size; i++){
		if (i+1 != size && arrOfNum[i]>arrOfNum[i+1]){
			fNum = arrOfNum[i];
			arrOfNum[i] = arrOfNum[i+1];
			arrOfNum[i + 1] = fNum;
			isChange = 1;
		}
		else if (i + 1 == size && isChange == 1) {
			i = -1;
			isChange = 0;
			size--;
		}
	}
	return;
}

int main()
{
	int n;
	cin >> n;
	int* num = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	bubbles(num, n);
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
}

