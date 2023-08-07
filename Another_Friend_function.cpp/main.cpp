#include <iostream>
#include <string>

class Person; // Forward declaration

class Friend {
public:
    void displayInfo(const Person& p);
};

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Declare the Friend class as a friend so it can access private members
    friend class Friend;

    // Setter function to update name and age
    void updateInfo(const std::string& n, int a) {
        name = n;
        age = a;
    }
};

void Friend::displayInfo(const Person& p) {
    std::cout << "Friend's access to Person's private members:" << std::endl;
    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age: " << p.age << std::endl;
}

int main() {
    Person person("Alice", 25);

    Friend friendObj;
    friendObj.displayInfo(person);

    return 0;
}
