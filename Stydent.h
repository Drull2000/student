#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
private:
    std::string name;
    std::vector<int> grades;

public:
    Student(const std::string& name = "");
    void addGrade(int grade);
    std::string getName() const;
    double getAverage() const;
    void showInfo() const;
};

#endif
