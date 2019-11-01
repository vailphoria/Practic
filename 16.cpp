#include <iostream>
#include <vector>
using namespace std;

void simpleNum(int n, vector<int>& subNumbers)
{
	int k = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			n /= i;
			subNumbers.push_back(i);
			i = 1;
		}
	}
	subNumbers.push_back(n);

}

int main()
{
	int n;
	vector<int> subNumbers;

	cin >> n;
	simpleNum(n, subNumbers);

	int nowNum = subNumbers[0];
	int count = 1;
	cout << subNumbers[0];
	for (int i = 1; i < subNumbers.size(); i++) {
		if (subNumbers[i] == nowNum) {
			count++;
			if (i == subNumbers.size() - 1) {
				cout << "^" << count;
			}
		}
		else {
			if (count > 1) {
				cout << "^" << count;
			}
			count = 1;
			nowNum = subNumbers[i];
			cout << "*" << subNumbers[i];
		}
	}
	return 0;
}