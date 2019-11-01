#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");

	int s, l1, r1, l2, r2;
	int x1, x2;
	cin >> s >> l1 >> r1 >> l2 >> r2;

	for (x1 = l1; x1 <= r1; x1++) {
		for (x2 = l2; x2 <= r2; x2++) {
			if (x1 + x2 == s) {
				break;
			}
		}
		if (x1 + x2 == s) {
			break;
		}
	}
	if (x1 + x2 == s) cout << x1 << " " << x2;
	else cout << -1;
}