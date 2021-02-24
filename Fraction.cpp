#include "Fraction.h"

//Fraction
void Fraction::SetP(double first, double second)
{
	p.Init(first, second);
}
Fraction::Pair Fraction::GetP() const { return p; }

void Fraction::Display()
{
	cout << "\nFirst = " << p.GetFirst() << endl;
	cout << "Second = " << p.GetSecond() << endl;
}
void Fraction::Read()
{
	double x, y;
	cout << "First = "; cin >> x; p.SetFirst(x);
	cout << "Second = "; cin >> y; p.SetSecond(y);
}
string Fraction::toString() const
{
	stringstream sout;

	sout << "\nFirst = " << p.GetFirst() << endl;
	sout << "Second = " << p.GetSecond() << endl;

	return sout.str();
}

int Fraction::ComparePairs(Fraction::Pair p1, Fraction::Pair p2) const
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 2;
	if (p1.GetFirst() == p2.GetFirst() &&
		p1.GetSecond() == p2.GetSecond())
		return 3;
	else
		return 0;
}
void Fraction::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}
//Pair
void Fraction::Pair::SetFirst(double value) { first = value; }
void Fraction::Pair::SetSecond(double value) { second = value; }

double Fraction::Pair::GetFirst() const { return first; }
double Fraction::Pair::GetSecond() const { return second; }

void Fraction::Pair::Init(double x, double y)
{
	first = x;
	second = y;
}
void Fraction::Pair::Read()
{
	cout << "First = "; cin >> first;
	cout << "Second = "; cin >> second;
}
void Fraction::Pair::Display()
{
	cout << "\nFirst = " << GetFirst() << endl;
	cout << "Second = " << GetSecond() << endl;
}

string Fraction::Pair::toString_pair() const
{
	stringstream sout;

	sout << "\nFirst = " << first <<  endl;
	sout << "Second = " << second << endl;

	return sout.str();
}