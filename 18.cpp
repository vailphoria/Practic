#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int main()
{
	int n[20];
	int min = 100, max = -100;
	srand(time(NULL));

	for (int i = 0; i < 20; i++) {
		n[i] = -100 + (rand() % 200);
		cout << n[i] << " ";
		
		if (n[i] < min) min = n[i];
		if (n[i] > max) max = n[i];
	}
	cout << "\n" << min << "\n" << max;

}

