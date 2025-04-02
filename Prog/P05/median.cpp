#include <algorithm>

int median(const int a[], int n) {
    int* tmp = new int[n];

    for (int i = 0; i < n; i++) {
        tmp[i] = a[i];
    }

    std::sort(tmp, tmp + n);

    int median = 0;

    if (n  % 2 == 0) {
        median = (tmp[ n / 2 - 1] + tmp[ n / 2]) / 2;
    } else {
        median = tmp[n / 2];
    }
    delete [] tmp;
    return median;
}