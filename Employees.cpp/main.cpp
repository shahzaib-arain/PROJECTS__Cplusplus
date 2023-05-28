#include <iostream>
#include <string>

using namespace std;

struct employee {
    int employee_code;
    string name;
    string date;
};

const int number = 500;
employee worker[number];

void employees_detail() {

    int number;
    cout << "Enter how many Employees want to join the company: ";
    cin >> number;

    for (int i = 0; i < number; i++) {
        cout << "Enter the details of employee " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        cin >> worker[i].name;
        cout << "Enter employee code: ";
        cin >> worker[i].employee_code;
        cout << "Enter date of joining (YYYY-MM-DD) ";
        cin >> worker[i].date;
    }


    cout << endl;
    for (int i = 0; i < number; i++) {
        cout << "Name: " << worker[i].name << endl;
        cout << "Employee code: " << worker[i].employee_code << endl;
        cout << "Date of joining: " << worker[i].date << endl;
    }
}

int calculateDays(string date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));

    int totalDays = 0;

    totalDays += (year - 1) * 365;

    for (int i = 1; i < month; i++) {
        if (i == 2)
            totalDays += 28;
        else if (i % 2 == 0)
            totalDays += 30;
        else
            totalDays += 31;

    totalDays += day;

    return totalDays;
}}

void date_joined() {

    string date;
    cout << "Enter current date (YYYY-MM-DD): ";
    cin >> date;

    int threshold = 1096;


    for (int j = 0; j < number; j++) {
        int joinedDays = calculateDays(worker[j].date);
        int currentDays = calculateDays(date);
        int days = currentDays - joinedDays;


        if (days >= threshold) {
            cout << "The worker " << worker[j].name << " has completed three or more years of tenure." << endl;
        } else {
            cout << "The worker " << worker[j].name << " has not completed three years yet." << endl;
        }
    }
}

int main() {
    employees_detail();
    date_joined();
    return 0;
}
