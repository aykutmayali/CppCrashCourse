//return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
//    ...
//        ...
//        ...
//        [if return_type is non void]
//    return something of type `return_type`;
//}

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int max;
    if (a > b) {
        if (a > c) {
            if (a > d) {
                max = a;
            }
        }
    }
    if (c > d) {
        if (c > b) {
            if (c > a) {
                max = c;
            }
        }
    }
    if (b > a) {
        if (b > c) {
            if (b > d) {
                max = b;
            }
        }
    }
    if (d > b) {
        if (d > c) {
            if (d > a) {
                max = d;
            }
        }
    }

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}