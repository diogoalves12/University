//
// Created by Diogo Alves on 02/06/2025.
//

#include "show_file.h"
#include <string>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

void calc_medians(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);

    out << fixed << setprecision(1);
    string line;

    while (getline(in, line)) {
        istringstream iss(line);

        if (line.empty() || line[0] == '#') continue;

        size_t comment_pos = line.find('#');
        if (comment_pos != string::npos)
            line = line.substr(0, comment_pos);

        string id;
        iss >> id;

        vector<double> values;
        double val;

        while (iss >> val) {
            values.push_back(val);
        }

        if (values.empty()) continue;

        sort(values.begin(), values.end());

        double median;
        size_t n = values.size();
        if (n % 2 == 1) {
            median = values[n / 2];
        } else {
            median = 0.5 * (values[n / 2 - 1] + values[n / 2]);
        }

        out << id << " " << median << endl;
    }




}
