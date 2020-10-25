/* 
Input Format
The first line contains two space - separated integers denoting the respective values of "n"(the number of variable - length arrays) and "q"(the number of queries).
Each line "i"of the "n" subsequent lines contains a space - separated sequence in the format k a[i]0 a[i]1 … a[i]k - 1 describing the "k"-  element array located at "a[i]" .
Each of the "q" subsequent lines contains two space - separated integers describing the respective values of "i"(an index in array"a") and"j"(an index in the array referenced by "a[i]") for a query. 

Output Format

For each pair of "i" and "j" values (i.e., for each query), print a single integer that denotes the element located at index "j" of the array referenced by "a[i]" . 
There should be a total of "q" lines of output.

n= index , up to down , number of arrays
k= length of arrays , left to right

Sample Input
2 2                     // 2 query 2 array , variable for query q , variable for array count n
3 1 5 4                 // first array[3] , elements 1 5 4 , [i] variable for array length
5 1 2 8 9 3             // second array[5] , elements 1 2 8 9 3 , [i] variable for array length
0 1                     // first return , 0. array 1. element = 5
1 3                     // second return , 1. array 1. element = 9
Sample Output
5
9

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, n, l, m, v, y, z; // q = query , n number of array , l length of array

    cin >> q >> n;  // 2 2   

    int b[n];

    for (int j = 0; j < n; j++) {
        cin >> l;     // 3
        int a[l];
        b[n] = a[l];
        for (int i = 0; i < l; i++) {
            cin >> m;              //1 5 4  
            a[i] = m;
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> v;                  //0
        y = b[v];
        cin >> z;
        cout << y;
    }



    return 0;
}
