#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function   
    vector<int> rr;
    char ch;
    //rr.resize(str.size());
    for (int i = 0;i < str.size();i++) {
        if (str[i] != ',') {
            //  rr[i]=str[i];
            cout << str[i] << "\n";
        }
        else {
            ch = str[i];
        }
    }
    return rr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
