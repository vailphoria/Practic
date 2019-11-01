#include <iostream>
using namespace std;

int main()
{
	int n, num;
	cin >> n;
	int numeral[10];

	for (int i = 0; i < 10; i++) {
		numeral[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		numeral[num]++;
	}

	for (int i = 0; i < 10; i++) {
		if (numeral[i] != 0) {
			cout << i << ": " << numeral[i] << endl;
		}
	}
}

