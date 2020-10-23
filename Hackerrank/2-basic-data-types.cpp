//Int("%d") : 32 Bit integer
//Long("%ld") : 64 bit integer
//Char("%c") : Character type
//Float("%f") : 32 bit real value
//Double("%lf") : 64 bit real value
//
//To read a data type, use the following syntax :
//scanf("`format_specifier`", &val)
//
//char ch;
//double d;
//scanf("%c %lf", &ch, &d);
//
//To print a data type, use the following syntax :
//printf("`format_specifier`", val)
//
//char ch = 'd';
//double d = 234.432;
//printf("%c %lf", ch, d);

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;

    // cin>>a>>b>>c>>d>>e;
    // cout<<a<<"\n";
    // cout<<b<<"\n";
    // cout<<c<<"\n";
    // cout<<d<<"\n";
    // cout<<e<<"\n";

    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    printf("%f\n", d);
    printf("%lf\n", e);




    return 0;
}