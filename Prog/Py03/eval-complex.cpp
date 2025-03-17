#include "complex.h"

#include "complex.h"

complex add(complex a, complex b) {
  complex result;
  result.real = a.real + b.real;
  result.img = a.img + b.img;
  return result;
}

complex mul(complex a, complex b) {
  complex result;
  result.real = (a.real * b.real) - (a.img * b.img);
  result.img = (a.real * b.img) + (b.real * a.img);
  return result;
}

complex eval(const complex a[], int n, complex x) {
  complex result = {0, 0};
  complex current_x = {1, 0};

  for (int i = 0; i < n; i++) {
    result = add(result, mul(a[i], current_x));
    current_x = mul(current_x, x);
  }

  return result;
}
