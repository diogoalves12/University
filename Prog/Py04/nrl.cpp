#include <iostream>

using namespace std;

int nrl(const char s[], char low[]) {
    int letters[26] = {0};
    int nrl = 0;

    int size = 0;
    while (s[size]) size++;

    for (int i = 0; i < size; i++) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (c >= 'a' && c <= 'z') {
                c -= ('a' - 'A');
            }
            letters[c - 'A']++;
        }
    }

    int j = 0;
    for (int i = 0; i < 26; i++) {
        if (letters[i] == 1) {
            nrl++;
            low[j++] = i + 'a';
        }
    }

    low[j] = '\0';
    return nrl;
}
