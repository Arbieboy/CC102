#include <iostream>

using namespace std;

int main() {
	 
	int Age;
	cout << "What is your age?";
	cin >> Age;
	
	if (Age < 16) {
		cout << "Too young to drive!";
	}
	else if (Age ==  16) {
		cout << "Better clear the road!";
	}else{
		cout << "You're getting pretty old!";
	}
	return 0;
}