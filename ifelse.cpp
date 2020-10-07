#include <iostream>

using namespace std;

int main(){

    int first;
    int second;

    cout << "Give two integers \n";

    cout << "First: ";
    cin >> first;

    cout << "Second: ";
    cin >> second;

    if(first == 10 * second){
        cout << "You gave a large first number";
    } else {
        cout << "the numbers are approximately the same";
    }

    return 0;
}