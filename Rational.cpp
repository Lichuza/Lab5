#include "Rational.h"

using namespace std;

//Перегрузка операции +
Rational operator+(const Rational &A, const Rational &B)
{
	return Rational(A.GetNominator()*B.GetDenominator() + B.GetNominator()*A.GetDenominator(), A.GetDenominator()*B.GetDenominator());
}


//Перегрузка операции -
Rational operator-(const Rational &A, const Rational &B) 
{
	return Rational(A.GetNominator()*B.GetDenominator() - B.GetNominator()*A.GetDenominator(), A.GetDenominator()*B.GetDenominator());
}


