#include <iostream>
#include "Fraction.h"

int main()
{
    Fraction::Pair a, b, c;
    Fraction f;
    f.SetP(0, 0);
    int result;

    cout << "\nPair a" << endl;
    a.Read();
    a.Display();

    cout << "\nPair b" << endl;
    b.Init(2.5, 1);
    b.Display();

    cout << "\nPair c" << endl;
    c.Init(1, 2.5);
    cout << c.toString_pair();


    cout << "\na and b" << endl;
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);

    return 0;
}
