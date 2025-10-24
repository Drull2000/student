#include "Student.h"
#include <iostream>
#include <numeric> 

using namespace std;

Student::Student(const string& name) : name(name) {}

void Student::addGrade(int grade) {
    grades.push_back(grade);
}

string Student::getName() const {
    return name;
}

double Student::getAverage() const {
    if (grades.empty()) return 0.0;
    double sum = accumulate(grades.begin(), grades.end(), 0);
    return sum / grades.size();
}

void Student::showInfo() const {
    cout << "Ім'я: " << name << ", оцінки: ";
    for (int g : grades) cout << g << " ";
    cout << "| середній бал: " << getAverage() << endl;
}
