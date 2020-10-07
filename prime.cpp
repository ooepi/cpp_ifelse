#include <iostream>

using namespace std;

int main(){
        
    int j, prime;

    for(int i = 0; i<=100; i++){

        if (i == 1 || i == 0) {
            continue;
        }
        
        prime = 1;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0){
                prime = 0;
                break;
            }
        }

        if (prime == 1){
            cout << i;

            if(i < 97){
                cout << ", ";
            }
        }

    }


    return 0;
}