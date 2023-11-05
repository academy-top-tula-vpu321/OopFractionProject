#pragma once
#include <iostream>
#include <iostream>
#include <string>

class Money
{
	int rub;
	int kop;
public:
	Money() : rub{}, kop{} {}
	Money(int rub, int kop) :rub{ rub }, kop{ kop } {}

	int& Rub() { return rub; }
	int& Kop() { return kop; }

	friend std::ostream& operator<<(std::ostream& out, const Money m)
	{
		out << m.rub << " rub, " << m.kop << " kop.";
		return out;
	}
};

class Fraction
{
private:
	int numerator;
	unsigned int denominator;
public:
	Fraction() : numerator{ 0 }, denominator{ 1 } {}
	Fraction(int numerator, int denominator);

	void SetNumerator(int numerator);
	int GetNumerator() const;
	void SetDenominator(unsigned int d);
	int GetDenominator() const;

	void Add(Fraction f);
	Fraction Sum(const Fraction& f);
    Fraction Minus(const Fraction& f);
    Fraction Mult(const Fraction& f);
    double Value();
	void Print() const;

	std::string ToString();

	friend std::ostream& operator<<(std::ostream& out, const Fraction& f);


	Fraction operator-();

	operator Money()
	{
		return Money(numerator / denominator, (numerator % denominator / (float)denominator) * 100);
	}

	operator double()
	{
		return (double)numerator / denominator;
	}
	
	//Fraction operator+(int number) const;

    ~Fraction()
    {
        //std::cout << "Fraction destroy\n";
    }

	friend Fraction operator+(const Fraction& f1, const Fraction& f2);
	friend Fraction operator+(const Fraction& f, int number);
	friend Fraction operator+(int number, const Fraction& f);

	friend Fraction operator*(const Fraction& f1, const Fraction& f2);

	friend bool operator<(const Fraction& f1, const Fraction& f2);
	friend bool operator>=(const Fraction& f1, const Fraction& f2);

	Fraction operator++();
	Fraction operator++(int);
};



