// Cpp_Crash_Course.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //kind of variables
    int age = 25;
    age = 26;
    float weight = 75;
    double balance = 6776.67;
    char gender = 'm';
    string username = "mayali";
    bool isTodaySunny = false;
    string colors[10] = { "red","green","pink","yellow","blue" };
 //   cout << colors[0];
 //   cin >> colors[5];
 //   cout << colors[5];
 //   std::cout << "Hello World!\n";
    if (isTodaySunny) {
        cout << "go to the park" << endl;
    }
    else {
        cout << "take an umbrella" << endl;
    }
    isTodaySunny ? cout << "Go to park" : cout << "Take an umbrella";
    
    
    system("pause>0");

}

