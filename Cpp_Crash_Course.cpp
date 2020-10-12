// Cpp_Crash_Course.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// ------------ function declaration, it should be before main function
double sum(double a, double b); // declare before main fuction
void introduceMe(string name, int age=0);
//void celebrateBirthday(int age);
void celebrateBirthday(int* age); // * for taking pointer of the address

// ------------ definition of a class, it should be before main function
class Car {
public:             // without this access modifier all attributes of a class is private by default
    string Name;
    string Color;
    double Price;

    Car(string name,string color, double price) {         // constructor does not return any value , it must be same name with class
        Name = name;
        Color = color;
        Price = price;
    }
};

class Car2 {
public:             // without this access modifier all properties of a class is private by default
    string Name;
    string Color;
    double Price;   

    Car2(string name, string color, double price) {         // constructor does not return any value , it must be same name with class
        Name = name;
        Color = color;
        Price = price;       
    }

    void getInfo() {                                        // defining a function for this class
        cout << " My Car's  Name : " << Name << ", Color : " << Color << ", Price : " << Price << " $" << endl;
    }
};

class Car3 {
private:            
    
    string Color;
    double Price;
    
protected:                //derived classes can reach this attributes with protected but not from other outer scope
    string Name;
    bool isBroken;
public:
    Car3(string name, string color, double price) {         // constructor does not return any value , it must be same name with class
        Name = name;
        Color = color;
        Price = price;
        isBroken = false;
    }
    void getInfo() {                                        // defining a function for this class
        cout << " My Car's  Name : " << Name << ", Color : " << Color << ", Price : " << Price << " $" << endl;
    }
    void crashCar() {
        cout << Name << " crashed" << endl;
        isBroken = true;
    }
    void repairCar() {
        cout << Name << " repaired" << endl;
        isBroken = false;
    }
    void move() {
        if (isBroken) 
            cout << Name << " is broken " << endl;
        else 
            cout << Name << " is driving " << endl;
    }
};

class FlyingCar : public Car3 {                 //derived class(flying car) takes its dna from base class(Car3)
public:
    FlyingCar(string name, string color, double price) :Car3(name, color, price) {

    }
    void move() {
        if (isBroken)
            cout << Name << " is broken " << endl;
        else
            cout << Name << " is flying " << endl;
    }
};

class UnderwaterCar : public Car3 {                 
public:
    UnderwaterCar(string name, string color, double price) :Car3(name, color, price) {

    }
    void move() {
        if (isBroken)
            cout << Name << " is broken " << endl;
        else
            cout << Name << " is diving " << endl;
    }
};

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
    
    /*int myAge = 25;
    cout << "Before Function, age  "<< myAge << endl;
    celebrateBirthday(myAge);
    cout << "After Function, age  " << myAge << endl;*/

    // using pointers with functions
    //int myAge = 25;
    //cout << "Before Function, age  " << myAge << endl;
    //celebrateBirthday(&myAge);                          // & gives address of the variable , here pass the address
    //cout << "After Function, age  " << myAge << endl;

    // using pointers with arrays
    //int luckyNumbers[5] = { 1,3,5,7,9 };
    //cout << luckyNumbers << endl;           // this gives the address of the array
    //cout << &luckyNumbers[0] << endl;       // gives the address of the first element in the array    
    //cout << luckyNumbers[0] << endl;        // gives the value of the first element in the array 

    //int* luckyPointer = luckyNumbers;       //it points the arrays(luckyNumbers) address
    //cout << "Pointing to "<< luckyPointer << " address of luckyNumber array , first value: "<< *luckyPointer <<endl; // *(address) == defining int* == address ==&vvariable
    //luckyPointer++;                         //pointer incremented it shows the second element in the array
    //cout << "Pointing to " << luckyPointer << " address of luckyNumber array , second value: " << *luckyPointer << endl;

    // ***************------------------ objects -----------*************** //
//Car myCar;              // create an object from a class
//myCar.Name = "Jag-1";   // attributes of this object
//myCar.Color = "Gray";
//myCar.Price = 100000;
//cout << " My Car's  Name : " << myCar.Name << ", Color : " << myCar.Color << ", Price : " << myCar.Price << " $" << endl;

Car myCar("Jag-1", "Gray", 100000);  // with constructor create same object 
cout << " My Car's  Name : " << myCar.Name << ", Color : " << myCar.Color << ", Price : " << myCar.Price << " $" <<endl;
Car myCar2("Volvo", "Black", 120000);
cout << " My Car's  Name : " << myCar2.Name << ", Color : " << myCar2.Color << ", Price : " << myCar2.Price << " $" << endl;

Car2 mini("Mini", "Red", 90000);
mini.getInfo();               // call a function with ()

    // encapsulation, inheritance, polymorphism (oop)
    
    // with encapsulation , private attributes can be reached with functions like get,set 

Car3 ford("Ford", "Blue", 50000);
ford.move();
ford.crashCar(); // can change isBroken attribute over this function
ford.move();
ford.repairCar();
ford.move();

    // inheritance : passing dna from family
FlyingCar fly1("Tesla", "White", 500000);
UnderwaterCar und1("Miralay", "Blue", 500000);
fly1.getInfo();
    // polymorphism : same method different functions
fly1.move();
und1.getInfo();
und1.move();

Car3* carPointer1 = &fly1; //pointer assigned address of fly1
Car3* carPointer2 = &und1;

carPointer1->crashCar();
carPointer2->crashCar();


ford.move();
fly1.move();
und1.move();

carPointer1->repairCar();
carPointer2->repairCar();


ford.move();
fly1.move();
und1.move();

system("pause>0");

}

// ------------ function definition
double sum(double a, double b) {  
    return a + b;
}

void introduceMe(string name, int age) {
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
}

//void celebrateBirthday(int age) {
//    age++;
//    cout << " Celebrated " << age << ". birthday" << endl;
//}

void celebrateBirthday(int* age) {                              // here received the pointer
    (*age)++;                                                   // access the value stored in that address
    cout << " Celebrated " << *age << ". birthday" << endl;     // return the value which is incremented +1
}

