// Program Purpose:Ex1, Class of students create functions etc``
// Author:
// Last Modified:23/03/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <random>
#include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

class student {
private:
  string name;
  int rollNo;
  int total_marks;
  int year;

public:
  // default constructor
  student() {};
  // overload constructor
  void putDetails(string name, int rollNo, int totalMarks, int year) {
    this->name = name;
    this->rollNo = rollNo;
    this->total_marks = totalMarks;
    this->year = year;
  }

  void getDetails() {
    cout << "Student Name: \t" << name << "\n";
    cout << "Student ID: \t" << rollNo << "\n";
    cout << "Total Marks: \t" << total_marks << "%" << "\n";
    cout << "Year: \t\t" << year << "\n";
  }
  void editName(string newname) { this->name = newname; }
};

int main() {
  string newname;
  string first_name;
  string last_name;
  int choice;
  student s1;
  s1.putDetails("vasos pavlika", 123, 90, 2025);
  s1.getDetails();
  cout << "To edit name, Type 1 or 0 to quit: " << endl;
  cin >> choice;
  if (choice == 1) {
    cout << "Enter new name: " << "\n";
    // cin >> newname;
    // getline(cin, newname);

    cin >> first_name >> last_name;
    newname = first_name + " " + last_name;
    s1.editName(newname);
    s1.getDetails();
  }
  return 0;
}
