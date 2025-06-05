//
// Created by Diogo Alves on 05/06/2025.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

void show_vector(const vector<pair<string, size_t>>& count) {
    std::cout << "[ ";
    for (const auto& e : count) {
        std::cout << e.first << ":" << e.second << ' ';
    }
    std::cout << "]\n";
}

void count_words(const string& str, vector<pair<string, size_t>>& count) {
    istringstream iss(str);

    string word;
    while(iss >> word) {
        for(char &c : word) c = tolower(c);
        if(count.size() == 0) count.push_back({word, 1});
        else {
            bool found = false;

            for(auto& elem : count) {
                if (elem.first == word) {
                    elem.second++;
                    found = true;
                    break;
                }
            }
            if(!found) {
                count.push_back({word, 1});
            }
        }
    }
    sort(count.begin(), count.end(),
         [](const pair<string, size_t>& p1, const pair<string, size_t>& p2) {
                    return p1.first < p2.first;
                });
}