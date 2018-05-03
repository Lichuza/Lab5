#pragma once
#include<math.h>
class Rational
{
public:
	//Конструктор по умолчанию
	Rational() :nominator(0), denominator(1) {}
	//Конструктор преобразования
	Rational(const int &number) : nominator(number), denominator(1) {}
	//Конструктор инициализации
	Rational(const int &nominator, const int &denominator) : nominator(nominator), denominator(denominator) {}


	friend Rational operator+(const Rational &A, const Rational &B);
	friend Rational operator-(const Rational &A, const Rational &B);
	

	//Функция вывода числителя
	const long int &GetNominator() const { return nominator; }

	//Функция вывода знаменателя
	const long int &GetDenominator() const { return denominator; }

	//Функция сокращения дроби
	static long int GetGcd(const long int &a, const long int &b)
	{
		long int a1 = abs(a);
		long int b1 = abs(b);

		while (true)
		{

			a1 = a1 % b1;
			if (a1 == 0)
			{
				return b1;
			}

			b1 = b1 % a1;
			if (b1 == 0)
			{
				return a1;
			}
		}
	}

	//Вывод сокрашенной дроби
	Rational GetPresented() const
	{
		
		long int gcd = GetGcd(GetNominator(), GetDenominator());
		long int nominator = GetNominator() / gcd;
		long int denominator = GetDenominator() / gcd;

		if (denominator < 0)
		{
			nominator = -nominator;
			denominator = -denominator;
		}

		return Rational(nominator, denominator);
	}

private: 
	//Числитель
	const long int nominator;

	//Знаменатель
	const long int denominator;

};

