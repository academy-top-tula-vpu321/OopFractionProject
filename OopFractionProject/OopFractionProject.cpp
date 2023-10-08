#include <iostream>


class Fraction
{
    const double PI = 3.1415;

    int numerator;
    unsigned int denominator;
public:
    //Fraction()
    //{
    //    //std::cout << "Fraction create\n";
    //    numerator = 0;
    //    denominator = 1;
    //}

    Fraction() : numerator{ 0 }, denominator{ 1 } {}

    Fraction(int numerator, int denominator) 
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

    void SetNumerator(int numerator) { this->numerator = numerator; }
    int GetNumerator() const { return numerator; }
    void SetDenominator(unsigned int d)
    {
        if (d == 0)
            std::cout << "Error! Divid by zero!!!\n";
        else
            denominator = d;
    }
    int GetDenominator() const { return denominator; }

    void Add(Fraction f)
    {
        this->numerator = this->numerator * f.denominator
            + this->denominator * f.numerator;
        this->denominator *= f.denominator;
    }

    Fraction Sum(const Fraction& f)
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

    Fraction Minus(const Fraction& f)
    {
        return Fraction(this->numerator * f.denominator
            - this->denominator * f.numerator,
            this->denominator * f.denominator);
    }

    Fraction Mult(const Fraction& f)
    {
        return Fraction(this->numerator * f.numerator,
            this->denominator * f.denominator);
    }

    const double Value()
    {
        return (double)numerator / denominator;
    }


    void Print() const
    {
        std::cout << "[" << numerator << "/" << denominator << "]";
    }

    ~Fraction()
    {
        //std::cout << "Fraction destroy\n";
    }

    friend void Info(Fraction f);
};



void Info(Fraction f)
{
    std::cout << f.numerator;
}

class B;




int main()
{
    Fraction f1(5, 7);
    Fraction f2(2, 5);
    //f1.SetNumerator(5);
    //f1.SetDenominator(7);
    //f1.Print();
    //std::cout << "\n";

    //f1.Add(f2);
    f1.Sum(f2).Mult(f1).Print();
    std::cout << "\n";

    f1.Print();
    std::cout << "\n";

    f2.Print();
    std::cout << "\n";

    double x = f2.Value();
}

