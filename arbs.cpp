#include <iostream>
using namespace std;
int main() {
 
	int age;
	double money, parent;
	string toPrintShow, toPrintMoney;
	cout << "Enter age :";
	cin >> age;
	if(age<13) {
		cout << "With Parent? ";
		cin >> parent;
		if (parent)
			toPrintShow = "PG $ G show. " ;
		else 
			toPrintMoney = "G show" ;
	} 
	else if (age<16) {
		cout << "With parent? ";
		cin >> parent;
		if (parent)
			toPrintShow = "R, PG 4 G show.";
		else 
			toPrintMoney = "PG & G show. ";		
	}
	else 
		toPrintShow = "R, PG & G show.";
	cout << "Enter money :";
	cin >> money;
	if (money<7.5)
		toPrintMoney = "Not enough money.";
	else if (money<10.5)
		toPrintMoney = "Can go to matineeshow" ;
	else 
		toPrintMoney = "Can go to evening and matinee show";
	cout << toPrintShow << endl;
	cout << toPrintMoney << endl;
	return 0;
}