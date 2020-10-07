#include <iostream>

using namespace std;

int main(){

    int number;

    cout << "give an interger between (and including) 0 and 9\n";
    cin >> number;

    switch (number)
    {
    case 0:
        cout << "0";
        break;
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2";
        break;
    case 3:
        cout << "3";
        break;
    case 4:
        cout << "4";
        break;
    case 5:
        cout << "5";
        break;
    case 6:
        cout << "6";
        break;
    case 7:
        cout << "7";
        break;
    case 8:
        cout << "8";
        break;
    case 9:
        cout << "9";
        break;
    
    default:
        cout << "invalid input\n";
        break;
    }

    return 0;
}