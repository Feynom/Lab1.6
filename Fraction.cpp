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

void Fraction::ComparePairs(Fraction::Pair p1, Fraction::Pair p2)
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		cout << "\nP1 > P2" << endl;
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		cout << "\nP1 < P2" << endl;
	if (p1.GetFirst() == p2.GetFirst() &&
		p1.GetSecond() == p2.GetSecond())
		cout << "P1 = P2" << endl;
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