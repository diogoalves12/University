//
// Created by Diogo Alves on 02/06/2025.
//

#include "wc.h"
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

wcresult wc(const string& filename) {
    wcresult res = {0, 0, 0};
    ifstream in(filename);

    string line;
    while(getline(in,line)){
        istringstream iss(line);
        res.lines++;
        string word;
        while(iss >> word)
            res.words++;

        res.bytes += line.size() + 1;
    }

    return res;
}