#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

bool Fraction::Init(int x, int y) {
	pair.setFirst(x);
	if (y >= 0)
	{
		pair.setSecond(y);
		return true;
	}
	else
	{
		pair.setSecond(0);
		return false;
	}
}

void Fraction::Read() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	do {
		cout << "Ціла частина числа: "; cin >> x;
		cout << "Дробова частина числа: "; cin >> y;
	} while (!Init(x, y));
}

void Fraction::Display() {
	cout << toString();
}

string Fraction::toString() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "Число: " << pair.getFirst() << "." << pair.getSecond() << endl;
	return sout.str();
}

bool Less(Fraction a, Fraction b) {
	return ( a.pair.getFirst() < b.pair.getFirst()) || (a.pair.getFirst() == b.pair.getFirst() && a.pair.getSecond() < b.pair.getSecond());
}
bool NLess(Fraction a, Fraction b) { return !Less(a, b); }

bool Great(Fraction a, Fraction b) {
	return (a.pair.getFirst() > b.pair.getFirst()) || (a.pair.getFirst() == b.pair.getFirst() && a.pair.getSecond() > b.pair.getSecond());
}
bool NGreat(Fraction a, Fraction b) { return !Great(a, b); }

bool Equal(Fraction a, Fraction b) {
	return a.pair.getFirst() == b.pair.getFirst() && a.pair.getSecond() == b.pair.getSecond();
}
bool NEqual(Fraction a, Fraction b) { return !Equal(a, b); }
