//
// Created by Diogo Alves on 05/06/2025.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

void show_map(const map<string, size_t>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}

void count_words(const string& str, map<string, size_t>& count) {
    istringstream iss(str);

    string word;
    while(iss >> word) {
        for(char& c : word) c = tolower(c);
        ++count[word];
    }
}