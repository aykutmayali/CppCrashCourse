#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function   
    vector<int> rr;
    string temp;
    stringstream ss;
    int num;
    // cout<<str.size(); length = 7 / 2 3 , 4 , 5 6
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ',') { // 2 3 , 4 ,
            temp = temp + str[i]; // 2 3 
           // cout<<temp<<" "<<" as string in if"<<" i: "<<i <<"\n";
            if (i == str.size() - 1) {
                // cout<<temp<<" "<<" as string in else"<<" i: "<<i <<"\n";           
                ss << temp; // ss<-23 temp           
                ss >> num;  //23->num
               // cout<<num<<" "<<"as number"<<" i: "<<i <<"\n";          
                rr.push_back(num);
            }
        }
        else {

            //cout<<temp<<" "<<" as string in else"<<" i: "<<i <<"\n";           
            ss << temp; // ss<-23 temp           
            ss >> num;  //23->num
           // cout<<num<<" "<<"as number"<<" i: "<<i <<"\n";          
            rr.push_back(num); //  rr<-- 23
            temp = "";  // temp = ""
            ss.clear();
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
