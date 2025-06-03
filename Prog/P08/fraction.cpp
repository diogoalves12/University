//
// Created by Diogo Alves on 03/06/2025.
//

class Fraction {
public:
    Fraction() : numerator_(0), denominator_(1) {}
    Fraction(int num, int den) : numerator_(num), denominator_(den) { normalise(); }
    Fraction sum(const Fraction& right);
    Fraction sub(const Fraction& right);
    Fraction mul(const Fraction& right);
    Fraction div(const Fraction& right);
    void normalise();
    void write() const;
    int gcd(int a, int b);
    int denominator() {return denominator_; }
    int numerator() {return numerator_; }
private:
    int numerator_ ;
    int denominator_;
};

#include "fraction_aux.h"

Fraction Fraction::sum(const Fraction &right) {
    return Fraction(numerator_ * right.denominator_ + right.numerator_ * denominator_, denominator_ * right.denominator_);
}

Fraction Fraction::sub(const Fraction &right) {
    return Fraction(numerator_ * right.denominator_ - right.numerator_ * denominator_, denominator_ * right.denominator_);
}

Fraction Fraction::mul(const Fraction& right) {
    return Fraction(numerator_ * right.numerator_, denominator_ * right.denominator_);
}

Fraction Fraction::div(const Fraction& right) {
    return Fraction(numerator_* right.denominator_, denominator_ * right.numerator_);
}
