// Cpp_Crash_Course.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ---------------- kind of variables --------- //
    int age = 25;
    age = 26;
    float weight = 75;
    double balance = 6776.67;
    char gender = 'm';
    string username = "mayali";
    bool isTodaySunny = false;
    bool isTodayWeekend = false;
    string colors[10] = { "red","green","pink","yellow","blue" };
 //   cout << colors[0];
 //   cin >> colors[5];
 //   cout << colors[5];
 //   std::cout << "Hello World!\n"; //this std symbol of namespace , and if you use it upper side not need to write here again


    // ------------------ decision loops ----------- //
   /* if (isTodaySunny) {
        cout << "go to the park" << endl;
    }
    else {
        cout << "take an umbrella" << endl;
    }*/

   // isTodaySunny ? cout << "Go to park" : cout << "Take an umbrella";

    if (isTodayWeekend && isTodaySunny)
    {
        cout << "Go to the park, it is sunny" <<endl;
    }
    else if (isTodayWeekend && !isTodaySunny) {
        cout << "Go to the park , but take an umbrella" << endl;
    }
    else {
        cout << "Go to work anyway" << endl;
    }
    
    
    system("pause>0");

}

