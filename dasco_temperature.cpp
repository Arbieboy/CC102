#include <iostream>

using namespace std;

int main() {

	int temperature;
	cout << "Enter temperature	:	";
	cin >> temperature;
	 
	if (temperature < 32) {
		cout << "Bring a heavy jacket";
	}else if (temperature == 32 || temperature <= 50) {
		cout << "Bring a light jacket";
	}else{
		cout << "Bring any kind of jacket";
	}

	return 0;
}