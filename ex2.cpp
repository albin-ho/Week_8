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
  int year; // Year of study, ie 1-4
  int mathMark;
  int computingMark;
  int physicsMark;

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
  void editYear(int newYear) {
    if (year >= 4) {
      cout << "**************************************" << "\n";
      cout << "** " << "Student has to leave University!" << " **" << "\n";
      cout << "**************************************" << "\n";
    } else {
      this->year = newYear;
    }
  }
  int averageMark(int mathMark, int computingMark, int physicsMark) {
    int average;
    return average = (mathMark + computingMark + physicsMark) / 3;
  }
};

// void EnterNewName(string newname) {
//   // string newname;
//   string first_name;
//   string last_name;
//   cin >> first_name >> last_name;
//   newname = first_name + " " + last_name;
//   s1.editName(newname);
//   s1.getDetails();
// }

int main() {
  // vars
  string newname;
  string first_name;
  string last_name;
  int newYear;
  int choice;
  // program start

  cout << "This program demonstrates a student Class" << endl;
  //
  // Define student s1
  //
  student s1;
  s1.putDetails("vasos pavlika", 123, 90, 4);
  s1.getDetails(); // Display student s1
  // create and array of student objects
  int s[] = {2, 3, 4, 5};

  for (int i = 0; i < 4; i++) {
    cout << "student s" << s[i] << ".getDetails()" << "\n";
    // cout << "\n";
    //  for (int j = 2; j < 10; j++) {
    //   s[j].getDetails();
    // }
  }
  // for (int j = 2; j < 4; j++) {
  //  student s[j];
  // cout << "\n";
  //}
  // int mypointer
  //   // display array of students
  //   for (int i = 1; i < 10; i++) {
  //     cout << *(mypointer + i) << "\n";
  //   }
  //  do {
  cout << "Type 0 to quit: " << "\n"
       << "Type 1 to edit Name:" << "\n"
       << "Type 2, to edit Year:" << "\n ";
  cin >> choice;
  switch (choice) {
  case 0:
    cout << "Quitting..." << endl;
    return 0;
  case 1:
    cout << "Edit Student Name" << endl;
    cin >> first_name >> last_name;
    newname = first_name + " " + last_name;
    s1.editName(newname);
    s1.getDetails();

    break;
  case 2:
    cout << "Edit Year" << endl;
    cin >> newYear;
    s1.editYear(newYear);
    s1.getDetails();
    break;
  default:
    cout << "Please choose and option!" << endl;
  }
  //} while (choice != 0);

  // if (choice == 1) {
  //   cout << "Enter new name: " << "\n";
  //   // cin >> newname;
  //   // getline(cin, newname);
  //
  //   cin >> first_name >> last_name;
  //   newname = first_name + " " + last_name;
  //   s1.editName(newname);
  //   s1.getDetails();
  // }
  //
  return 0;
}
