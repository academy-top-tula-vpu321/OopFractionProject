#include <iostream>

class Fraction
{
    int numerator;
    unsigned int denominator;
public:
    void SetNumerator(int n) { numerator = n; }
    int GetNumerator() { return numerator; }
    void SetDenominator(unsigned int d)
    {
        if (d == 0)
            std::cout << "Error! Divid by zero!!!\n";
        else
            denominator = d;
    }
    int GetDenominator() { return denominator; }

    void Print() 
    {
        std::cout << "[" << numerator << "/" << denominator << "]";
    }
};

int main()
{
    Fraction f1;
    f1.SetNumerator(5);
    f1.SetDenominator(7);
    f1.Print();
}
