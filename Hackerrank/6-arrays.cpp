//The first line of the input contains N , where N is the number of integers.The next line contains N space - separated integers.
//Print the N integers of the array in the reverse order, space - separated on a single line.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int z;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
        cin >> z;
        arr[i] = z;
    }
    for (int i = n;i > 0;i--) {
        cout << arr[i - 1] << " ";
    }

    return 0;
}
