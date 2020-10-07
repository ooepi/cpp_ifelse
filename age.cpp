#include <iostream>

using namespace std;

int main(){

    int age;

    cout << "What is your age? ";
    cin >> age;

    if (age >= 0 && age <= 3) {
        cout << "Baby";
    } else if (age >= 4 && age <= 15 ) {
        cout << "Child";
    } else if (age >= 16 && age <= 18) {
        cout << "Teenager";
    } else if (age >= 19 && age <= 25) {
        cout << "Young adult";
    } else if (age > 25) {
        cout << "Adult";
    } else {
        cout << "Not a valid input";
    }
 
    return 0;
}