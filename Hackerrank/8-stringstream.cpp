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
            rr.push_back(str[i]);
            //cout << str[i] << "\n";
        }
        else {
            ch = str[i];
        }
    }
    cout << rr[0] << "\n";
    cout << rr[1] << "\n";
    cout << rr[2] << "\n";
    cout << rr[3] << "\n";
    cout << ch << "\n";
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
