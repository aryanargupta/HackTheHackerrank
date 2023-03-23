//POINTERS
//QUESTION LINK:-https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

//APPROACH:- was supposed to be done using pointers but can be done easily without that too. calculating the sum of the numbers and the absolute difference
// between the two using - operator and abs() function and then output using cout.
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int x = a + b;
    int y = a - b;
    int z = abs(y);
    cout << x << endl << z << endl;
    return 0;
}
