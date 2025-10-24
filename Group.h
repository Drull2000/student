#ifndef GROUP_H
#define GROUP_H

#include <string>
#include <vector>
#include "Student.h"

class Group {
private:
    std::string groupName;
    std::vector<Student> students;

public:
    Group(const std::string& name = "");
    void addStudent(const Student& s);
    void removeStudent(const std::string& name);
    void showAll() const;
    std::string getGroupName() const;
    void setGroupName(const std::string& name);
};

#endif
