#ifndef __complex_h__
#define __complex_h__

// Representation of a complex number z = x + y i
struct complex {
    double x; // Real part
    double y; // Imaginary part
};

double norm(const complex& c);
void add(const complex& a, const complex& b, complex& r);
void mul(const complex& a, const complex& b, complex& r);

#include <iostream>
#include <iomanip>

std::ostream& operator<<(std::ostream& out, const complex& c);

#endif // __complex_h__