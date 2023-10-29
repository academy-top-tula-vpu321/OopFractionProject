#pragma once
#include <iostream>
#include <string>

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
};



