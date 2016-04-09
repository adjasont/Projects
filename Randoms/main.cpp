#include <iostream>
#include <list>
#include "poly.h"
#include <string>

using namespace std;

int menu();
int main()
{
	list<poly> eq1, eq2, sumEq;
	string equation;
	int input;
	do {
		input = menu();
		if (input == 1) {
			cout << "Enter your first Equation\n";
			cin >> equation;
			makeEquation(equation);
		}

	} while (input != 2);


	system("pause");
	return 0;
}
int menu() {
	int input;
	cout << "Make your choice\n1. For yes \n2. for no" << endl;
	cin >> input;
	return input;
}
poly makeEquation(string equation)
{
	string::iterator it = equation.begin();
	if (*it == '-') {
		++it;
		if(*it == )
	}
}
