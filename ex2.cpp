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
  void putDetails(string name, int rollNo, int totalMarks, int year,
                  int mathmark, int compmark, int physmark) {
    this->name = name;
    this->rollNo = rollNo;
    this->total_marks = totalMarks;
    this->year = year;
    this->mathMark = mathmark;
    this->computingMark = compmark;
    this->physicsMark = physmark;
  }
  // access functions
  void getDetails() {
    cout << "Student Name: \t\t" << name << "\n";
    cout << "Student ID: \t\t" << rollNo << "\n";
    cout << "Total Marks: \t\t" << total_marks << "%" << "\n";
    cout << "Year: \t\t\t" << year << "\n";
    cout << "Maths: \t\t\t" << mathMark << "%" << "\n";
    cout << "Computing: \t\t" << computingMark << "%" << "\n";
    cout << "Physics: \t\t" << physicsMark << "%" << "\n";
  }

  // mutator functions
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
  // int averageMark(int mathMark, int computingMark, int physicsMark);
  // void gradeMark(int mathIn, int CompIn, int physicsIn);
  // void gradeMark(int mark1, int mark2);

  int averageMark(int mathMark, int computingMark, int physicsMark) {
    // function to calculate average marks,
    // assuming all marks are weighted equally
    int Num_of_subjects = 3;
    int average;
    int subject_tot_marks;
    // do the calculation , can be used with overloads
    subject_tot_marks = mathMark + computingMark + physicsMark;
    average = subject_tot_marks / Num_of_subjects;
    return average;
  }

  void gradeMark(int mathIn, int CompIn, int physicsIn) {
    int sum = (mathIn + CompIn + physicsIn);
    int avg = sum / 3;
    if (avg >= 70)
      cout << "First" << "\n";
    else if (avg >= 60 && avg <= 69)
      cout << "2:1";
    else if (avg >= 50 && avg <= 59)
      cout << "2:2";
    else if (avg >= 40 && avg <= 49)
      cout << "pass";
    else
      cout << "Fail";
  }
  void gradeMark(int mark1, int mark2) {
    int sum = (mark1 + mark2);
    int avg = sum / 2;
    if (avg >= 70)
      cout << "First" << "\n";
    else if (avg >= 60 && avg <= 69)
      cout << "2:1";
    else if (avg >= 50 && avg <= 59)
      cout << "2:2";
    else if (avg >= 40 && avg <= 49)
      cout << "pass";
    else
      cout << "Fail";
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
  s1.putDetails("vasos pavlika", 123, 90, 4, 85, 75, 90);
  s1.getDetails(); // Display student s1
  cout << "The final Grade is: " << "\t";
  s1.gradeMark(85, 75, 90);

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
