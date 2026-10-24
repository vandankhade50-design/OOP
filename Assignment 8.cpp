
#include <iostream>
using namespace std;

class BasicInfo {
protected:
    int id;
    string name;
    int age;

public:
    void getBasicInfo() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayBasicInfo() {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nAge: " << age;
    }
};

class DepartmentInfo {
protected:
    string department;
    float salary;

public:
    void getDepartmentInfo() {
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDepartmentInfo() {
        cout << "\nDepartment: " << department;
        cout << "\nSalary: " << salary;
    }
};

class Employee : public BasicInfo, public DepartmentInfo {
public:
    void accept() {
        getBasicInfo();
        getDepartmentInfo();
    }

    void display() {
        displayBasicInfo();
        displayDepartmentInfo();
        cout << endl;
    }
};

int main() {
    Employee e;

    cout << "Enter Employee Details:\n";
    e.accept();

    cout << "\n--- Employee Information ---";
    e.display();

    return 0;
}
