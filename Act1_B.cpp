#include <iostream>
using namespace std;

int main () {
	
	for (int a = 8; a>=1; a--) {
	
		for (int b=a; b>0; b--)
		{
			cout << "*";
		}
		cout << endl;
	}
		
	return 0;
}