#include <iostream>

using namespace std;

int main(){

    int a, b, c, i, divisor;

    cout << "Give first number: ";
    cin >> a;
    cout << "Give second number: ";
    cin >> b;

    if(a>b){
        c=a;
        a=b;
        b=c;
    }

    
    for(i = 1; i < a; i++) {
        if(b%a == 0){
            divisor = a;
        } else if(a%i == 0 && b%i == 0){
            divisor = i;
        }
    }

    cout << divisor;


    return 0;
}