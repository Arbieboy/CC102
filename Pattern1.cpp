#include <iostream>
using namespace std;

int main() {
	int rows = 8;
	
	for (int a = 1; a <= rows; a++) {
		for (int b = 1; b <= rows - a; b++) {
			cout << "  "; 
		}
		for (int b = a; b>=1; b--) {
			if (b % 3 == 0 ) {
				cout << "* ";
			} 
			else if (b % 5 == 0 ) {
				cout << "# ";
			}else {
				cout << b << " ";
			}
		}
		
		cout << endl;
	}
	
	return 0;
}