#include <iostream>
using namespace std;

// Structure definition
struct Person {
    string name;
    int age;
};

int main() {
    // Declare a pointer to a Person structure
    Person* personPtr;

    // Dynamically allocate memory for a Person structure
    personPtr = new Person;

    // Access structure members using pointer
string     personPtrname = "John Doe";
 int    personPtrage = 25;

    // Print structure members using pointer
    cout << "Name: " << personPtrname << endl;
    cout << "Age: " << personPtrage << endl;

    // Deallocate memory
    delete personPtr;

    return 0;
}
