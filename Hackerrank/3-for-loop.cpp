//For each integer  in the inclusive interval [a,b]:
//
//If,1<=n<=9 then print the English representation of it in lowercase.That is "one" for, "two" for, and so on.
//Else if n>9 and it is an even number, then print "even".
//Else if n>9 and it is an odd number, then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b;
    //cout<<"You can enter the first and the last number"<<endl;
    cin >> a >> b;

    for (int i = a; i <= b; ++i) {
        if (i <= 9 && i >= 0) {
            if (i == 1) cout << "one" << "\n";
            if (i == 2) cout << "two" << "\n";
            if (i == 3) cout << "three" << "\n";
            if (i == 4) cout << "four" << "\n";
            if (i == 5) cout << "five" << "\n";
            if (i == 6) cout << "six" << "\n";
            if (i == 7) cout << "seven" << "\n";
            if (i == 8) cout << "eight" << "\n";
            if (i == 9) cout << "nine" << "\n";
        }
        else {
            if (i % 2 == 0) {
                cout << "even" << "\n";
            }
            else {
                cout << "odd" << "\n";
            }
        }
    }
    return 0;
}