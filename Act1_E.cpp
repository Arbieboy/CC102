#include <iostream>

using namespace std;

int main () {

	for (int a=1; a<=8; a++) 
	{
		for (int b=8-a; b>=0; b--)
		{
		cout << " ";
		}
		for (int c = a; c>0; c--)
		{
		cout << c;
		}
	cout << endl;	
	}

	return 0;
}