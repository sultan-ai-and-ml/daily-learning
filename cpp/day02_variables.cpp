#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    float marks = 85.5;
    double pi = 3.14159;
    char grade = 'A';
    string name = "Sultan";
    bool isStudent = true;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Pi: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    cout << "\n--- Enter your details ---" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "\nHello " << name << "! You are " << age << " years old." << endl;

    return 0;
}