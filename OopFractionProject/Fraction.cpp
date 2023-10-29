#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
    : numerator{ numerator }
{
    //std::cout << "Fraction params create\n";
    //this->numerator = numerator;
    if (denominator == 0)
    {
        std::cout << "Error! Divid by zero!!!\n";
        this->denominator = 1;
    }
    else
        this->denominator = denominator;
}

void Fraction::SetNumerator(int numerator) { this->numerator = numerator; }
int Fraction::GetNumerator() const { return numerator; }
void Fraction::SetDenominator(unsigned int d)
{
    if (d == 0)
        std::cout << "Error! Divid by zero!!!\n";
    else
        denominator = d;
}
int Fraction::GetDenominator() const { return denominator; }

void Fraction::Add(Fraction f)
{
    this->numerator = this->numerator * f.denominator
        + this->denominator * f.numerator;
    this->denominator *= f.denominator;
}

Fraction Fraction::Sum(const Fraction& f)
{
    /*Fraction result;
    result.numerator = f1.numerator * f2.denominator
        + f1.denominator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;

    return result;*/

    return Fraction(this->numerator * f.denominator
        + this->denominator * f.numerator,
        this->denominator * f.denominator);
}

Fraction Fraction::Minus(const Fraction& f)
{
    return Fraction(this->numerator * f.denominator
        - this->denominator * f.numerator,
        this->denominator * f.denominator);
}

Fraction Fraction::Mult(const Fraction& f)
{
    return Fraction(this->numerator * f.numerator,
        this->denominator * f.denominator);
}

double Fraction::Value()
{
    return (double)numerator / denominator;
}


void Fraction::Print() const
{
    std::cout << "[" << numerator << "/" << denominator << "]";
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << "[" << f.numerator << "/" << f.denominator << "]";
    return out;
}

std::string Fraction::ToString()
{
    return "[" + std::to_string(numerator) + "/" + std::to_string(denominator) + "]";
}

Fraction Fraction::operator-()
{
    return Fraction(-numerator, denominator);
}

Fraction operator+(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.numerator * f2.denominator
        + f1.denominator * f2.numerator,
        f1.denominator * f2.denominator);
}

Fraction operator+(const Fraction& f, int number)
{
    return Fraction(f.numerator + number * f.denominator, f.denominator);
}

Fraction operator+(int number, const Fraction& f)
{
    return f + number;
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    return Fraction(f1.numerator * f2.numerator,
        f1.denominator * f2.denominator);
}

bool operator<(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator * f2.denominator < f1.denominator * f2.numerator;
}

bool operator>=(const Fraction& f1, const Fraction& f2)
{
    //return !(f1 < f2);
    return f1.numerator * f2.denominator >= f1.denominator * f2.numerator;
}

