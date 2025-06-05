//
// Created by Diogo Alves on 05/06/2025.
//

#include <string>
#include <vector>
#include <map>

using namespace std;

unsigned roman_to_arab(const string& roman) {
    vector<pair<char, unsigned>> roman_to_int = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };

    map<char, unsigned> conv(roman_to_int.begin(), roman_to_int.end());

    int size = roman.size();
    unsigned value = 0;
    for(int i = 0; i < size;  i++){
        unsigned curr = conv[roman[i]];

        if(i + 1 < size) {
            unsigned next = conv[roman[i + 1]];

            if(curr < next) {
                value += next - curr;
                i++;
            } else {
                value += curr;
            }

        } else {
            value += curr;
        }
    }
    return value;
}
