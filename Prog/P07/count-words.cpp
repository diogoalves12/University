//
// Created by Diogo Alves on 02/06/2025.
//

#include <string>
#include <fstream>
#include <sstream>
#include <cctype>

using namespace std;

int count(const string& fname, const string& word) {
    int count = 0;

    ifstream input(fname);

    string lowerWord = word;
    for (auto& c : lowerWord) c = tolower(c);

    string line;
    while(getline(input, line)){
        istringstream iss(line);

        string key;
        while(iss >> key){
            for(auto& c : key) c = tolower(c);
            if(key == lowerWord) count++;
        }
    }

    return count;
}