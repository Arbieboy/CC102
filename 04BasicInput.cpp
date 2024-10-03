#include <iostream>

using namespace std;

int main() {
	string nickname, courseyear, school;

	
	cout << "Nickname\t\t: ";
	cin >> nickname;
	cout << "Course-YearLevel\t: ";
	cin >> courseyear;
	cout << "School\t\t\t: ";
	cin >> school;
	
	cout << "Wow congrats " << nickname << "! " << courseyear << " is a nice course. And you are studying in " << school << " which is a very good school " << endl;  
	
	return 0;
}