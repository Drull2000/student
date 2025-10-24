#include "Group.h"
#include <iostream>
using namespace std;

Group::Group(const string& name) : groupName(name) {}

void Group::addStudent(const Student& s) {
    students.push_back(s);
}

void Group::removeStudent(const string& name) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getName() == name) {
            students.erase(it);
            cout << "Студента '" << name << "' видалено." << endl;
            return;
        }
    }
    cout << "Студента з таким ім'ям не знайдено." << endl;
}

void Group::showAll() const {
    cout << "\n=== Група: " << groupName << " ===" << endl;
    if (students.empty()) {
        cout << "Студентів немає." << endl;
        return;
    }
    for (const auto& s : students)
        s.showInfo();
}

string Group::getGroupName() const {
    return groupName;
}

void Group::setGroupName(const string& name) {
    groupName = name;
}
