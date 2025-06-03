//
// Created by Diogo Alves on 02/06/2025.
//

#include "print.h"
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string trim(const string& str) {
    size_t first = str.find_first_not_of(' ');
    if(first == string::npos) return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}


void normalise(const string& input_fname, const string& output_fname) {
    ifstream in(input_fname);
    ofstream out(output_fname);

    string line;

    while(getline(in, line)){
        string trimmed = trim(line);
        if(trimmed.empty()) continue;

        for(char& c : trimmed) c = toupper(c);

        out << trimmed << endl;
    }
}

int main() {return 0;}