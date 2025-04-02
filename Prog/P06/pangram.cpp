#include <iostream>

using namespace std;

bool pangram(const string& s, string& m) {
    int present[26] = {0};

    for (char c : s) {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            int index = c - 'a';
            if((c >= 'A' && c <= 'Z')) index = c - 'A';
            present[index] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (present[i] == 0) {
            m += char('a' + i);
        }
    }

    for(int i = 0; i < 26; i++) {
        if (present[i] != 1) return false;
    }
    return true;
}