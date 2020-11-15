//A pointer in C++ is used to share a memory address among different contexts(primarily functions).They are used whenever a function needs to modify 
//the content of a variable, but it does not have ownership.
//In order to access the memory address of a val variable, , prepend it with & sign.For example,
//               &val returns the memory address of val.

//This memory address is assigned to a pointer and can be shared among functions.For example,
//     pointer p int* p = &val assigns the memory address of val to pointer p. and *p = val in the address of p
//To access the content of the memory pointed to, prepend the variable name with a * .
//For example, * p will return the value stored in val and any modification to it will be performed on val.

//void increment(int* v) {
//    (*v)++;
//}
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    increment(&a);
//    printf("%d", a);
//    return 0;
//}

//The function is declared with a void return type, so there is no value to return.
//Modify the values in memory so that "a" contains their sum and "b" contains their absoluted difference.

#include <stdio.h>

void update(int* a, int* b) {           //a and b are pointers
    int t = (*a);                       //t is val in where a points
    (*a) = (*a) + (*b);
    if (t > (*b)) {
        (*b) = t - (*b);
    }
    else if (t < (*b)) {
        (*b) = (*b) - t;
    }
    else {
        (*b) = 0;
    }
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}