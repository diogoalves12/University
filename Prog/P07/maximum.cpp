//
// Created by Diogo Alves on 02/06/2025.
//

#include "show_file.h"
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void maximum(const string& input_fname, const string& output_fname){
    double max = -1001;
    int count = 0;

    ifstream in(input_fname);
    ofstream out(output_fname);

    double value;

    out << fixed << setprecision(3);

    while(in >> value) {
        out << value << endl;
        count ++;
        if(value > max) max = value;
    }

    out << "count=" << count;
    out << "/max=" << max << endl;
}
