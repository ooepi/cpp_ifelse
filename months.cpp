#include <iostream>

using namespace std;

int main(){

    int month;

    cout << "What month number is it?\n";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "January has 31 days";
        break;
    case 2:
        cout << "February has 28 days";
        break;
    case 3:
        cout << "March has 31 days";
        break;
    case 4:
        cout << "April has 30 days";
        break;
    case 5:
        cout << "May has 31 days";
        break;
    case 6:
        cout << "June has 30 days";
        break;
    case 7:
        cout << "July has 31 days";
        break;
    case 8:
        cout << "<August has 31 days>";
        break;
    case 9:
        cout << "September has 30 days";
        break;
    case 10:
        cout << "October has 31 days";
        break;
    case 11:
        cout << "November has 30 days";
        break;
    case 12:
        cout << "December has 31 days";
        break;
    
    default:
        cout << "invalid input\n";
        break;
    }

    return 0;
}