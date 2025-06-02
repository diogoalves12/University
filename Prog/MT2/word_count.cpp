//
// Created by Diogo Alves on 02/06/2025.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "show_file.h"

using namespace std;

void word_count(const string& input_fname, const string& output_fname) {

    ifstream in(input_fname);
    ofstream out(output_fname);

    string line;

    while(getline(in,line)) {
        istringstream iss(line);
        string word;
        int words = 0;

        while(iss >> word) {
            words++;
        }

        out << words << endl;
    }
}
