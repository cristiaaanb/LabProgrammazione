#include <iostream>
using namespace std;

class Rational{

    public:

        Rational();
        Rational(int n);
        Rational(int n, int d);

        int getNum(){
            return numerator;
        }

        int getDen(){
            return denominator;
        }

    private:

        int numerator;
        int denominator;

}

//COSTRUTTORI
Rational::Rational() : numerator{0},denominator{1}{}
Rational::Rational(int n) : numerator{int n}, denominator{1}{}
Rational::Rational(int n, int d) : numerator{int n}, denominator{int d}{}

//FUNZIONI

//assignment
Rational::operator=(const Rational& x, const Rational& y){

}

//addizione
Rational::operator+(const Rational& x, const Rational& y){

}

//sottrazione
Rational::operator-(const Rational& x, const Rational& y){

}

//moltiplicazione
Rational::operator*(const Rational& x, const Rational& y){

}

//divisione
Rational::operator/(const Rational& x, const Rational& y){

}

int main(){

    return 0;
}