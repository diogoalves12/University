//
// Created by Diogo Alves on 05/06/2025.
//

#include <string>
#include <list>
#include <map>

using namespace std;

string student_highest_avg(map<string, list<int>> m) {
    pair<string, double> max = {"", 0.0};

    for(auto& elem : m) {
        double avg = 0;
        for(int& grade : elem.second) {
            avg += grade;
        }
        int size = elem.second.size();
        avg /= size;

        if(avg > max.second) {
            max.second = avg;
            max.first = elem.first;
        }
    }
    return max.first;
}