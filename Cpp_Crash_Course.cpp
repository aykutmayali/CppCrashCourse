// Cpp_Crash_Course.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// ------------function declaration
double sum(double a, double b); // declare before main fuction
void introduceMe(string name, int age=0);
void celebrateBirthday(int age);

int main()
{
    // ***************---------------- kind of variables ---------*************** //
    // variable is a container stores value 
    /*int age = 25;
    age = 26;
    float weight = 75;
    double balance = 6776.67;
    char gender = 'm';
    string username = "mayali ";
    bool isTodaySunny = false;
    bool isTodayWeekend = false;
    string colors[10] = { "red","green","pink","yellow","blue" };*/
    //   cout << balance;
     //   cout << username;
     //   cout << colors[0];
     //   cin >> colors[5];
     //   cout << colors[5];
     //   std::cout << "Hello World!\n"; //this std symbol of namespace , and if you use it upper side not need to write here again

    // ***************------------------ decision & loops -----------*************** //
    // ---------if-else mechanism
    /* if (isTodaySunny) {
        cout << "go to the park" << endl;
    }
    else {
        cout << "take an umbrella" << endl;
    }*/
    // isTodaySunny ? cout << "Go to park" : cout << "Take an umbrella";
    /* if (isTodayWeekend && isTodaySunny)
    {
        cout << "Go to the park, it is sunny" <<endl;
    }
    else if (isTodayWeekend && !isTodaySunny) {
        cout << "Go to the park , but take an umbrella" << endl;
    }
    else {
        cout << "Go to work anyway" << endl;
    }*/
    // ---------switch case mechanism
    //enum EyeColor { Brown, Blue, Green, Gray, Other }; // think them like an integer 0,1,2,3,4
    //EyeColor eyeColor = Brown;
    //int rand = 9;
    //switch (eyeColor) { // switch looks for int , switch (rand) turns default
    //case Brown: cout << "Most of people have Brown eyes"; break;
    //case Blue: cout << "10% of  people have Blue eyes ";  break;
    //case Green: cout << "2% of  people have Green eyes ";  break;
    //case Gray: cout << "1% of  people have Gray eyes ";   break;
    //case Other: cout << "1% of  people have other color eyes ";   break;
    //default: cout << "Not a valid eye color";
    //}
    // ---------while loops
    /*int counter = 1;
    while (counter <= 10) {
        cout << counter <<endl;
        counter++;
    }

    do {
        cout << "DoWhile always run first time" << endl;
        cout << counter << endl;
        counter++;
    } while (counter <= 10);*/
    // ------------for loops
    /*string animals[5] = { "cat","dog","cow","goat","bee" };
    int sizeofArray = sizeof(animals);
    int sizeofElement = sizeof(animals[0]);
    int lengthofArray = sizeofArray / sizeofElement;       
    cout << lengthofArray << endl;
    for (int i = 0; i < lengthofArray; i++)
    {
        cout << animals[i] << endl;
    }*/

    // ***************------------------ functions -----------*************** //
    /* cout << sum(2.2, 7.7) << endl;
    introduceMe("kerem", 25);
    introduceMe("aykut");*/

    // ***************------------------ pointers -----------*************** //
    // pointers stores an address of an variable
    // using pointers with functions
    int myAge = 25;
    cout << "Before Function, age  "<< myAge << endl;
    celebrateBirthday(myAge);
    cout << "After Function, age  " << myAge << endl;


    
    system("pause>0");

}

// ------------function definition
double sum(double a, double b) {  
    return a + b;
}

void introduceMe(string name, int age) {
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
}

void celebrateBirthday(int age) {
    age++;
    cout << " Celebrated " << age << ". birthday" << endl;
}