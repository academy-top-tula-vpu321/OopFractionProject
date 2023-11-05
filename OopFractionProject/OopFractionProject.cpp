#include <iostream>
#include "Fraction.h"

template <typename T>
T Sum(T a, T b)
{
    return a + b;
}



int main()
{
    Fraction f1(2, 3);
    Fraction f2(2, 5);

    std::cout << f1 << " ";
    std::cout << f1++ << " ";
    std::cout << f1 << "\n";

    Money m;
    m = (Money)f1;
    std::cout << m << "\n";
    std::cout << sin(f1) << "\n";

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

    //std::cout << "My fraction: " << f1 << " !!!\n";

    /*int n{ 10 };

    std::cout << n++ << "\n";
    std::cout << n << "\n";*/
    
}

