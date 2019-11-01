#include <iostream>
using namespace std;
#include <ctime>

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cin >> n;
	int* signals = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> signals[i];
	}

	for (int i = 1; i <= n; i++) 
	{
		qsort(signals, i, sizeof(int), comp1);

		if (i > 5) {
			for (int j = 4; j >= 0 ; j--)
				cout << signals[j] << " ";
		}
		else {
			for (int j = i-1; j >= 0; j--)
				cout << signals[j] << " ";
		}
		cout << "\n";

	}
}