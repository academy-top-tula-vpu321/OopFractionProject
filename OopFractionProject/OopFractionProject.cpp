#include <iostream>
#include "Fraction.h"

template <typename T>
T Sum(T a, T b)
{
    return a + b;
}


int main()
{
    Fraction f1(5, 7);
    Fraction f2(2, 5);

    //f1.SetNumerator(5);
    //f1.SetDenominator(7);
    //f1.Print();
    //std::cout << "\n";

    //f1.Add(f2);
    //f1.Sum(f2).Mult(f1).Print();

    //Fraction f3 = f1 * f2; //= (f1 + f2)* f1;

    //std::cout << "\n";

    //f1.Print();
    //std::cout << "\n";

    //f3.Print();
    //std::cout << "\n";

    //double x = f2.Value();

    /*int n{ 10 };
    int m{ 20 };

    int s = Sum(n, m);

    Fraction f3 = Sum(f1, f2);
    f3.Print();*/

    std::cout << "My fraction: " << f1 << " !!!\n";
}

