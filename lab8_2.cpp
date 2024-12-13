#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

char findGrade(float score) {
    if (score > 90) return 'A';
    else if (score > 75) return 'B';
    else if (score > 60) return 'C';
    else if (score > 45) return 'D';
    else return 'F';
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cin.ignore(); // To ignore the newline character after the integer input

    string name[100]; // Assuming a maximum of 100 students
    float score[100];

    for (int i = 0; i < numStudents; i++) {
        cout << "Name of student" << (i+ 1) << ":";
        getline(cin, name[i]); // [Missing Code 2]

        cout << "Score of student" << (i+ 1) << ":";
        cin >> score[i]; // [Missing Code 3]
        cin.ignore(); // To ignore the newline character after the float input
    }

    cout << "---------------------------------------------" << endl;
    cout << setw(25) << "Name" << setw(10) << "Score" << setw(10) << "Grade" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < numStudents; i++) {
        cout << setw(25) << name[i] << setw(10) << fixed << setprecision(2) << score[i] << setw(10) <<findGrade(score[i]) << endl; // [Missing Code 1]
    }

    return 0;
}
