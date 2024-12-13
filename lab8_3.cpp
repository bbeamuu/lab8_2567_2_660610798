#include <iostream>
#include <string>

using namespace std;

int main() {
    int age, height;
    double bounty;
    string character;

    // รับค่าอายุ
    cout << "Enter age: ";
    cin >> age;

    if (age <= 25) {
        // รับค่าส่วนสูง
        cout << "Enter height (cm): ";
        cin >> height;

        if (height <= 100) {
            character = "Chopper";
        } else if (height <= 180) {
            character = "Usopp";
        } else {
            // รับค่าหัว
            cout << "Enter bounty (millions): ";
            cin >> bounty;

            if (bounty > 1100) {
                character = "Zoro";
            } else {
                character = "Sanji";
            }
        }
    } else if (age <= 60) {
        // รับค่าหัว
        cout << "Enter bounty (millions): ";
        cin >> bounty;

        if (bounty <= 500) {
            character = "Franky";
        } else {
            character = "Jinbe";
        }
    } else {
        character = "Brook";
    }

    // แสดงตัวละครที่ได้
    cout << "Character: " << character << endl;

    return 0;
}