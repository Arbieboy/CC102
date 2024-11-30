#include <iostream>

using namespace std;

int main () {
	int rows = 8;
	
	for (int a = 1; a<=rows; a++) {
		for (int b = a; b>=1; b--) {
			cout << b;
		}
		cout << endl;
	}

	return 0;
}