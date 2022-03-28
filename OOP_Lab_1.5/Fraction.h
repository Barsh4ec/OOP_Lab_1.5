#pragma once
#include "Pair.h"
#include <string>
#include <sstream>
using namespace std;
class Fraction
{
	Pair pair;
public:
	bool Init(int, int);
	void Read();
	void Display();
	string toString();

	friend bool Less(Fraction x, Fraction y);
	friend bool NLess(Fraction x, Fraction y);
	friend bool Great(Fraction x, Fraction y);
	friend bool NGreat(Fraction x, Fraction y);
	friend bool Equal(Fraction x, Fraction y);
	friend bool NEqual(Fraction x, Fraction y);
};

