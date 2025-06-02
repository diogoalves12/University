//
// Created by Diogo Alves on 02/06/2025.
//

#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void print_grades(const map<string, list<int>>& grades) {
    std::vector<pair<std::string, double>> avg_grades;
    double avg_all_grades = 0;
    int students = 0;

    for(const auto& student : grades) {
        int size = student.second.size();
        double avg_grade = 0;
        for(const auto& grade : student.second) {
            avg_grade += grade;
        }

        avg_grade /= size;
        avg_all_grades += avg_grade;
        students++;
        avg_grades.push_back({student.first, avg_grade});
    }

    avg_all_grades /= students;

    std::sort(avg_grades.begin(), avg_grades.end(),
              [](const std::pair<std::string, double>& a, const std::pair<std::string, double>& b) {
                  return a.second > b.second;
              });

    for(const auto& grade : avg_grades) {
        std::cout << grade.first << " " << std::fixed << std::setprecision(2) << grade.second << endl;
    }

    std::cout << std::fixed << std::setprecision(2) << avg_all_grades << endl;
}