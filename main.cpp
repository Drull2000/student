#include <iostream>
#include "Group.h"
#include "Student.h"
using namespace std;

int main() {
    Group group;
    int choice;

    do {
        cout << "\n=== МЕНЮ ===" << endl;
        cout << "1 - Створити нову групу" << endl;
        cout << "2 - Додати студента" << endl;
        cout << "3 - Видалити студента" << endl;
        cout << "4 - Показати всіх студентів" << endl;
        cout << "0 - Вихід" << endl;
        cout << "> ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string name;
            cout << "Введіть назву групи: ";
            getline(cin, name);
            group.setGroupName(name);
            cout << "Групу '" << name << "' створено!" << endl;
        }
        else if (choice == 2) {
            string name;
            cout << "Ім'я студента: ";
            getline(cin, name);
            Student s(name);

            int grade;
            cout << "Введіть оцінки (0 для завершення): ";
            while (true) {
                cin >> grade;
                if (grade == 0) break;
                s.addGrade(grade);
            }
            cin.ignore();
            group.addStudent(s);
        }
        else if (choice == 3) {
            string name;
            cout << "Введіть ім'я студента для видалення: ";
            getline(cin, name);
            group.removeStudent(name);
        }
        else if (choice == 4) {
            group.showAll();
        }
        else if (choice == 0) {
            cout << "Вихід з програми..." << endl;
        }
        else {
            cout << "Невірний вибір!" << endl;
        }

    } while (choice != 0);

    return 0;
}
